
int life_coordinate[7][4]={{0,0,0,0},{1100,205,1140,250},{1140,205,1180,250},{1180,205,1220,250},{1250,205,1280,240},{1280,205,1310,240},{1310,205,1340,240}};
int life;
int check=1; // control the level indicator pic;

int life_management(int faul, int enemykop)
{
    if(enemykop==1)
    {
        life++;
    }
    if(faul==1)
        readimagefile("noman.jpg",life_coordinate[6][0],life_coordinate[6][1],life_coordinate[6][2],life_coordinate[6][3]);
    else if(faul==2)
        readimagefile("noman.jpg",life_coordinate[5][0],life_coordinate[5][1],life_coordinate[5][2],life_coordinate[5][3]);
    else if(faul==3)
    {
        life++;
        readimagefile("noman.jpg",life_coordinate[4][0],life_coordinate[4][1],life_coordinate[4][2],life_coordinate[4][3]);
    }

    //life decrease
    if(life>=3)
    {
        readimagefile("noman.jpg",life_coordinate[1][0],life_coordinate[1][1],life_coordinate[1][2],life_coordinate[1][3]);
        delay(400);
        return 100;
    }
    else if(faul>=3||enemykop==1)
    {
        faul=0;

        readimagefile("life.jpg",life_coordinate[4][0],life_coordinate[4][1],life_coordinate[4][2],life_coordinate[4][3]);
        readimagefile("life.jpg",life_coordinate[5][0],life_coordinate[5][1],life_coordinate[5][2],life_coordinate[5][3]);
        readimagefile("life.jpg",life_coordinate[6][0],life_coordinate[6][1],life_coordinate[6][2],life_coordinate[6][3]);
        if(life==1)
            readimagefile("noman.jpg",life_coordinate[3][0],life_coordinate[3][1],life_coordinate[3][2],life_coordinate[3][3]);
        else if(life==2)
            readimagefile("noman.jpg",life_coordinate[2][0],life_coordinate[2][1],life_coordinate[2][2],life_coordinate[2][3]);
    }
    return faul;
}

int level(int level_controller)
{
    int dl;
    char level_indicator[3];
    if(level_controller<=10)
    {
        level_indicator[0]='1';
        level_indicator[1]='\0';
        dl=1400;
    }
    else if(level_controller<=20 && level_controller>10)
    {
        if(level_controller>11)
            check=1;
        if(level_controller==11 && check==1)
        {
            check=0;
            readimagefile("levelup.jpg",1000,400,1300,600);
            delay(2000);
            readimagefile("noman.jpg",1000,400,1300,600);
        }
        level_indicator[0]='2';
        level_indicator[1]='\0';
        dl=1200;
    }
    else if(level_controller<=30 && level_controller>20)
    {
        if(level_controller>21)
            check=1;
        if(level_controller==21 && check==1)
        {
            check=0;
            readimagefile("levelup.jpg",1000,400,1300,600);
            delay(2000);
            readimagefile("noman.jpg",1000,400,1300,600);
        }
        level_indicator[0]='3';
        level_indicator[1]='\0';
        dl=1100;
    }

    else if(level_controller<=40 && level_controller>30)
    {
        if(level_controller>31)
            check=1;
        if(level_controller==31 && check==1)
        {
            check=0;
            readimagefile("levelup.jpg",1000,400,1300,600);
            delay(2000);
            readimagefile("noman.jpg",1000,400,1300,600);
        }
        level_indicator[0]='4';
        level_indicator[1]='\0';
        dl=1000;
    }
    else if(level_controller<=50 && level_controller>40)
    {
        if(level_controller>41)
            check=1;
        if(level_controller==41 && check==1)
        {
            check=0;
            readimagefile("levelup.jpg",1000,400,1300,600);
            delay(2000);
            readimagefile("noman.jpg",1000,400,1300,600);
        }
        level_indicator[0]='5';
        level_indicator[1]='\0';
        dl=800;
    }
    else if(level_controller<=60 && level_controller>50)
    {
        if(level_controller>51)
            check=1;
        if(level_controller==51 && check==1)
        {
            check=0;
            readimagefile("levelup.jpg",1000,400,1300,600);
            delay(2000);
            readimagefile("noman.jpg",1000,400,1300,600);
        }
        level_indicator[0]='6';
        level_indicator[1]='\0';
        dl=600;
    }
    else if(level_controller<=70 && level_controller>60)
    {
        if(level_controller>61)
            check=1;
        if(level_controller==61 && check==1)
        {
            check=0;
            readimagefile("levelup.jpg",1000,400,1300,600);
            delay(2000);
            readimagefile("noman.jpg",1000,400,1300,600);
        }
        level_indicator[0]='7';
        level_indicator[1]='\0';
        dl=400;
    }
    else if(level_controller<=80 && level_controller>70)
    {
        if(level_controller>71)
            check=1;
        if(level_controller==71 && check==1)
        {
            check=0;
            readimagefile("levelup.jpg",1000,400,1300,600);
            delay(2000);
            readimagefile("noman.jpg",1000,400,1300,600);
        }
        level_indicator[0]='8';
        level_indicator[1]='\0';
        dl=300;
    }
    else if(level_controller<=90 && level_controller>80)
    {
        if(level_controller>81)
            check=1;
        if(level_controller==81 && check==1)
        {
            check=0;
            readimagefile("levelup.jpg",1000,400,1300,600);
            delay(2000);
            readimagefile("noman.jpg",1000,400,1300,600);
        }
        level_indicator[0]='9';
        level_indicator[1]='\0';
        dl=200;
    }
    else if(level_controller>90)
    {
        if(level_controller>91)
            check=1;
        if(level_controller==91 && check==1)
        {
            check=0;
            readimagefile("levelup.jpg",1000,400,1300,600);
            delay(2000);
            readimagefile("noman.jpg",1000,400,1300,600);
        }
        level_indicator[0]='1';
        level_indicator[1]='0';
        level_indicator[1]='\0';
        dl=100;
    }
    setbkcolor(COLOR(102,178,255));
    setcolor(COLOR(255,0,0));
    settextstyle(4,HORIZ_DIR,3);
    outtextxy(750,4,level_indicator);
    return dl;
}
