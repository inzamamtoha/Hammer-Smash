

void highscore()
{
    FILE *fr,*fw;
    int i,x=400,y=300,score;
    char name[100],scr[10];

    initwindow(1366,768,"");
    setcolor(CYAN);
    rectangle(0,0,1366,768);
    setfillstyle(SOLID_FILL,COLOR(0,255,255));
    floodfill(10,10,CYAN);

    readimagefile("highscorer.gif",50,20,1200,200);

    fr=fopen("highscore.txt","r");
    setcolor(COLOR(255,0,0));
    settextstyle(1,HORIZ_DIR,4);
    setbkcolor(COLOR(0,255,255));
    outtextxy(x,y-70,"NAME");
    outtextxy(x+360,y-70,"SCORE");
    for(i=0;i<5;i++)
    {
        fscanf(fr,"%s %d",name,&score);
        itoa(score, scr, 10);
        setcolor(COLOR(0,0,255));
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(x,y,name);
        outtextxy(x+400,y,scr);
        y=y+70;
    }
    readimagefile("back.gif",1250,670,1360,750);

    int mouse_x,mouse_y;

    while(1)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            getmouseclick(WM_LBUTTONDOWN,mouse_x,mouse_y);
            if((mouse_x>=1260&&mouse_x<=1350)&&(mouse_y>=680&&mouse_y<=740))
            {
                break;
            }
            else
            {
                clearmouseclick(WM_LBUTTONDOWN);
            }
        }
    }
    fclose(fr);
    return;
}
void credits()
{
    initwindow(1366,768,"");
    readimagefile("credit.jpg",0,0,1366,768);
    readimagefile("back.gif",1250,670,1360,750);

    int mouse_x,mouse_y;

    while(1)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            getmouseclick(WM_LBUTTONDOWN,mouse_x,mouse_y);
            if((mouse_x>=1260&&mouse_x<=1350)&&(mouse_y>=680&&mouse_y<=740))
            {
                break;
            }
            else
            {
                clearmouseclick(WM_LBUTTONDOWN);
            }
        }
    }
    return;
}

void help()
{
    initwindow(1366,768,"");
    readimagefile("helpimage.jpg",0,0,1360,750);
    readimagefile("back.gif",1250,670,1360,750);

    int mouse_x,mouse_y;

    while(1)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            getmouseclick(WM_LBUTTONDOWN,mouse_x,mouse_y);
            if((mouse_x>=1260&&mouse_x<=1350)&&(mouse_y>=680&&mouse_y<=740))
            {
                break;
            }
            else
            {
                clearmouseclick(WM_LBUTTONDOWN);
            }
        }
    }
    return;

}

void exit()
{
    readimagefile("exit.jpg",1050,400,1350,440);
    readimagefile("yes.jpg",1100,440,1150,480);
    readimagefile("no.jpg",1230,440,1280,480);
    int mouse_x,mouse_y;
    while(1)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            getmouseclick(WM_LBUTTONDOWN,mouse_x,mouse_y);

            if((mouse_x>=1230 && mouse_x<=1280) &&(mouse_y>=440 && mouse_y<=480))
                break;
            else if((mouse_x>=1100 && mouse_x<=1150) &&(mouse_y>=440 && mouse_y<=480))
            {
                quit=0;
                break;
            }
            else clearmouseclick(WM_LBUTTONDOWN);
        }
        else if(ismouseclick(WM_MOUSEMOVE))
        {
            readimagefile("yes.jpg",1100,440,1150,480);
            readimagefile("no.jpg",1230,440,1280,480);
            getmouseclick(WM_MOUSEMOVE,mouse_x,mouse_y);
            if((mouse_x>=1230 && mouse_x<=1280) &&(mouse_y>=440 && mouse_y<=480))
            {
                setcolor(CYAN);
                rectangle(1230,440,1280,480);
            }
            else if((mouse_x>=1100 && mouse_x<=1150) &&(mouse_y>=440 && mouse_y<=480))
            {
                setcolor(CYAN);
                rectangle(1100,440,1150,480);
            }
            else{
                clearmouseclick(WM_MOUSEMOVE);
            }
        }

    }
    readimagefile("noman.jpg",1050,400,1350,500);
    return;
}

