#include"6.highscore_check.h"
#include"4.rabbit_controller.h"
#include"5.life_management_&_level_controller.h"

int haturi_delay=200;
int quit;

void score_count(int num);
void check_highscore(int score);
void highscore();
void credits();
int startmenu();
void gamewindow();
void gameover(int score);
void haturi(int rand);
void haturi_clr(int rand);
void bonus(int rand);
void bonus_clr(int rand);
void bonus_enemy(int bonus,int enemy);
void bonus_enemy_clr(int bonus,int enemy,int clr);
void dim_enemy(int dim,int rand);
void dim_enemy_clr(int dim,int rand,int clr);
void enemy(int rand);
void enemy_clr(int rand);
void dim(int rand);
void dim_clr(int rand);
void exit();
void pause();
void help();
int life_management(int faul, int enemykop);
void play_game();


void gameover(int score)
{
    initwindow(1366,768,"gameover");
    readimagefile("gameover.jpg",0,0,1366,768);
    delay(2000);
    check_highscore(score);
    cleardevice();
    return;

}

void haturi(int rand)
{
    readimagefile("noman.jpg",100,300,300,600);
    readimagefile("haturi.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(haturi_delay);
}

void haturi_clr(int rand)
{
   readimagefile("hole.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
   readimagefile("man2.gif",110,310,290,590);
}


void pause()
{
    readimagefile("pause.gif",1150,550,1300,650);
    char ch;
    while(1)
    {
        if(kbhit())
        {
            ch=getch();
            if(ch==' ')
            {
                readimagefile("noman.jpg",1100,550,1300,650);
                break;
            }
            else if(ch==27)
            {
                exit();
                readimagefile("noman.jpg",1100,550,1300,650);
                break;
            }
        }
    }
    readimagefile("noman.jpg",1100,550,1300,650);
    return;
}


void play_game()
{
    int level_controler=0,dl,faul=0,score=0;//dl==game level delay.
                            //c=the number of accurate shot.
                           //score= game score that show in the game window
    life=0;
    int press_delay=0;
    char faul_click;
    while(1)
    {
        press_delay++;

        score_count(score);//counting score

        dl=level(level_controler);

        int x= rand()%10;
        int y=rand()%10+1;
        int z=rand()%10+2;

        char ch;
        int bonus_rand,enemy_rand,press,kb_bonus=100,kb_enemy=100,kb_dim=100,dim_rand;
        int dm=0,bns=0,clr=0,enemykop=0;


        if(y==x && z==x)
        {
            bonus(x);
            kb_bonus=x;
        }

        else if(y==x)
        {
            bonus_rand=rand()%10;
            enemy_rand=rand()%10;
            while(bonus_rand==enemy_rand)
            {
                bonus_rand=rand()%10;
                enemy_rand=rand()%10;
            }
            bonus_enemy(bonus_rand,enemy_rand);
            kb_bonus=bonus_rand;
            kb_enemy=enemy_rand;
        }

        else if(z==x)
        {
            dim_rand=rand()%10;
            enemy_rand=rand()%10;
            while(dim_rand==enemy_rand)
            {
                dim_rand=rand()%10;
                enemy_rand=rand()%10;
            }
            dim_enemy(dim_rand,enemy_rand);
            kb_enemy=enemy_rand;
            kb_dim=dim_rand;
        }

        else if(y==z)
        {
            enemy(y);
            kb_enemy=y;
        }

        else {
            dim(x);
            kb_dim=x;
        }

        delay(dl);
        if(kbhit())
        {
            ch=getch();
            press=ch-48;
            if(ch==27)
            {
                exit();
                if(quit==0)
                    goto finish;
            }
            else if(ch==' ')
            {
                pause();
                if(quit==0)
                    goto finish;
            }
            else if(press>=1 && press<=9)
            {
                if(press==kb_dim)
                {
                    level_controler++;
                    score=score+2;
                    dm=1;
                }
                else if(press==kb_bonus)
                {
                    level_controler++;
                    score=score+5;
                    bns=1;
                }
                else if(press==kb_enemy)
                {
                    enemykop=1;
                }
                else
                {
                    faul++;
                }
                if(press>=1 && press<=9)
                {
                    readimagefile("man.jpg",100,300,300,600);
                    delay(100);
                    haturi(press);
                }

                //life decrease
                faul=life_management(faul,enemykop);
                if(faul==100)
                    goto last;
                if(press>=1 && press<=9)
                    haturi_clr(press);
                press_delay=0;
            }
        }

        if(press_delay==4)
        {
            faul++;
            faul=life_management(faul,enemykop);
            if(faul==100)
                goto last;
            press_delay=0;
        }

        while(kbhit())
        {
            faul_click=getch();
            if(faul_click==27)
            {
                exit();
                if(quit==0)
                    goto finish;
            }

            else if(faul_click==' ')
            {
                pause();
                if(quit==0)
                    goto finish;
            }

        }

        if(y==x && z==x)
        {
            if(bns==1)
                readimagefile("hole.jpg",point[kb_bonus][0],point[kb_bonus][1],point[kb_bonus][2],point[kb_bonus][3]);
            else bonus_clr(kb_bonus);
        }
        else if(y==x)
        {
            if(bns==1)
            {
                clr=1;
                bonus_enemy_clr(kb_bonus,kb_enemy,clr);
            }
            else bonus_enemy_clr(kb_bonus,kb_enemy,clr);
        }

        else if(z==x)
        {
            if(dm==1)
            {
                clr=1;
                dim_enemy_clr(kb_dim,kb_enemy,clr);
            }
            else dim_enemy_clr(kb_dim,kb_enemy,clr);
        }
        else if(y==z)
            enemy_clr(kb_enemy);
        else {
                if(dm==1)
                    readimagefile("hole.jpg",point[x][0],point[x][1],point[x][2],point[x][3]);
                else dim_clr(x);
        }
    }
    last:
        closegraph(CURRENT_WINDOW);
        gameover(score);
        return;
    finish:
        return;
}


