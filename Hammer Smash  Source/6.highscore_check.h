
void score_count(int num)
{
    char snum[9999];
    itoa(num, snum, 10);
    setbkcolor(COLOR(153,255,51));
    setcolor(COLOR(255,0,0));
    settextstyle(4,HORIZ_DIR,4);
    outtextxy(1245,261,snum);
}

void check_highscore(int score)//score came from gameover function
{
    FILE *fr,*fw;
    int i,j;
    int high_score[5];
    char high_scorer[5][20];
    char name[20],ch;
    fr = fopen("highscore.txt","r");
    for(i=0;i<5;i++)
    {
       fscanf(fr,"%s %d",high_scorer[i],&high_score[i]);
    }
    if(score<=high_score[4])
    {
        return;
    }
    else
    {
        for(i=4;i>=0;i--)
        {
        if(score<=high_score[i])
        {
            break;
        }
        }
        i++;

        initwindow(1366,768,"");
        setcolor(MAGENTA);
        rectangle(0,0,1366,768);
        setfillstyle(SOLID_FILL,MAGENTA);
        floodfill(480,130,MAGENTA);

        readimagefile("newhighscore.gif",100,20,1250,200);

        setbkcolor(MAGENTA);
        setcolor(CYAN);
        settextstyle(1,HORIZ_DIR,4);
        outtextxy(455,400,"Enter Your Name");
        settextstyle(1,HORIZ_DIR,1);
        outtextxy(500,425,"[no space is allowed]");

        j=0;
        name[0]='_';
        name[1]='\0';

        setbkcolor(MAGENTA);
        setcolor(CYAN);
        settextstyle(1,HORIZ_DIR,1);
        outtextxy(550,500,name);
        while(1)
        {

            if(kbhit())
            {
                ch= getch();

                if(ch=='\r')
                {
                    name[j] = '\0';
                    break;
                }
                if(ch=='\b')
                {
                    setbkcolor(MAGENTA);
                    setcolor(MAGENTA);
                    settextstyle(1,HORIZ_DIR,1);
                    outtextxy(550,500,name);
                    name[j] = '\0';
                    j--;
                    if(j<0)
                    {
                        j=0;
                        name[j]='_';
                        name[j+1]='\0';
                    }
                    else name[j]='_';
                    setbkcolor(MAGENTA);
                    setcolor(CYAN);
                    settextstyle(1,HORIZ_DIR,1);
                    outtextxy(550,500,name);
                }

                else if(ch>=65&&ch<=90 && j<8)
                {
                    name[j++] = ch;
                    name[j] = '_';
                    name[j+1]='\0';
                }
                else if((ch>=97&&ch<=122)&&j<8)
                {
                    name[j++] = ch-32;
                    name[j] = '_';
                    name[j+1]='\0';
                }
                setbkcolor(MAGENTA);
                setcolor(CYAN);
                settextstyle(1,HORIZ_DIR,1);
                outtextxy(550,500,name);

            }
        }
        for(j=4;j>i;j--)
        {
            strcpy(high_scorer[j],high_scorer[j-1]);
            high_score[j]= high_score[j-1];
        }
        strcpy(high_scorer[j],name);
        high_score[j]=score;
        fclose(fr);
        fw = fopen("highscore.txt","w");
        for(j=0;j<5;j++)
        {
            fprintf(fw,"%s %d\n",high_scorer[j],high_score[j]);

        }
    }
    fclose(fw);
    return;
}

