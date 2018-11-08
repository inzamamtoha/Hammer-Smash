#include"2.new_game.h"
#include"3.menu_function.h"

int startmenu()
{
    initwindow(1366,768,"");
    readimagefile("final_menu.jpg",0,0,1366,768);

    int cnt=1,i=55;
    int x1=175,x2=480,y[10]={390,438,443,490,495,540,545,590,595,640};

    int mouse_x,mouse_y;

    while(1)
    {

        if(ismouseclick(WM_LBUTTONDOWN))
        {

            getmouseclick(WM_LBUTTONDOWN,mouse_x,mouse_y);
            if((mouse_x>=x1&&mouse_x<=x2)&&(mouse_y>=y[0]&&mouse_y<=y[1]))
            {
                closegraph(CURRENT_WINDOW);
                quit=1;
                gamewindow();
                if(quit==0)
                    return 0;
            }
            else if((mouse_x>=x1&&mouse_x<=x2)&&(mouse_y>=y[2]&&mouse_y<=y[3]))
            {
                closegraph(CURRENT_WINDOW);
                highscore();
            }
            else if((mouse_x>=x1&&mouse_x<=x2)&&(mouse_y>=y[4]&&mouse_y<=y[5]))
            {
                closegraph(CURRENT_WINDOW);
                help();
            }
            else if((mouse_x>=x1&&mouse_x<=x2)&&(mouse_y>=y[6]&&mouse_y<=y[7]))
            {
                closegraph(CURRENT_WINDOW);
                credits();
            }
            else if((mouse_x>=x1&&mouse_x<=x2)&&(mouse_y>=y[8]&&mouse_y<=y[9]))
            {
                closegraph(CURRENT_WINDOW);
                return 0;
            }
            else
            {
                clearmouseclick(WM_LBUTTONDOWN);
            }
        }
        else if(ismouseclick(WM_MOUSEMOVE))
        {
            readimagefile("final_menu.jpg",0,0,1366,768);
             getmouseclick(WM_MOUSEMOVE,mouse_x,mouse_y);
            if((mouse_x>=x1&&mouse_x<=x2)&&(mouse_y>=y[0]&&mouse_y<=y[1]))
            {
                setcolor(WHITE);
                rectangle(x1,y[0],x2,y[1]);
            }
            else if((mouse_x>=x1&&mouse_x<=x2)&&(mouse_y>=y[2]&&mouse_y<=y[3]))
            {
                setcolor(WHITE);
                rectangle(x1,y[2],x2,y[3]);
            }
            else if((mouse_x>=x1&&mouse_x<=x2)&&(mouse_y>=y[4]&&mouse_y<=y[5]))
            {
                setcolor(WHITE);
                rectangle(x1,y[4],x2,y[5]);
            }
            else if((mouse_x>=x1&&mouse_x<=x2)&&(mouse_y>=y[6]&&mouse_y<=y[7]))
            {
                setcolor(WHITE);
                rectangle(x1,y[6],x2,y[7]);
            }
            else if((mouse_x>=x1&&mouse_x<=x2)&&(mouse_y>=y[8]&&mouse_y<=y[9]))
            {
                setcolor(WHITE);
                rectangle(x1,y[8],x2,y[9]);
            }
            else
            {
                clearmouseclick(WM_MOUSEMOVE);
            }
        }

    }
}


void gamewindow()
{
    initwindow(1366,768,"");
    readimagefile("bg51.jpg",0,0,1366,768);
    readimagefile("score.gif",1080,200,1250,350);
    readimagefile("man2.gif",110,310,290,590);

    readimagefile("level1.jpg",550,3,750,27);

    readimagefile("hole.jpg",point[1][0],point[1][1],point[1][2],point[1][3]);
    readimagefile("hole.jpg",point[2][0],point[2][1],point[2][2],point[2][3]);
    readimagefile("hole.jpg",point[3][0],point[3][1],point[3][2],point[3][3]);

    readimagefile("hole.jpg",point[4][0],point[4][1],point[4][2],point[4][3]);
    readimagefile("hole.jpg",point[5][0],point[5][1],point[5][2],point[5][3]);
    readimagefile("hole.jpg",point[6][0],point[6][1],point[6][2],point[6][3]);

    readimagefile("hole.jpg",point[7][0],point[7][1],point[7][2],point[7][3]);
    readimagefile("hole.jpg",point[8][0],point[8][1],point[8][2],point[8][3]);
    readimagefile("hole.jpg",point[9][0],point[9][1],point[9][2],point[9][3]);

    readimagefile("life.jpg",life_coordinate[4][0],life_coordinate[4][1],life_coordinate[4][2],life_coordinate[4][3]);
    readimagefile("life.jpg",life_coordinate[5][0],life_coordinate[5][1],life_coordinate[5][2],life_coordinate[5][3]);
    readimagefile("life.jpg",life_coordinate[6][0],life_coordinate[6][1],life_coordinate[6][2],life_coordinate[6][3]);

    readimagefile("head.jpg",life_coordinate[1][0],life_coordinate[1][1],life_coordinate[1][2],life_coordinate[1][3]);
    readimagefile("head.jpg",life_coordinate[2][0],life_coordinate[2][1],life_coordinate[2][2],life_coordinate[2][3]);
    readimagefile("head.jpg",life_coordinate[3][0],life_coordinate[3][1],life_coordinate[3][2],life_coordinate[3][3]);

    play_game();
    return;
}
