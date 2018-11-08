
int point[10][4]={{0,0,0,0},{400,200,600,400},{600,200,800,400},{800,200,1000,400},{400,400,600,600},{600,400,800,600},{800,400,1000,600},{400,600,600,800},{600,600,800,800},{800,600,1000,800}};
int cartoon_delay=50;

void bonus(int rand)
{
    readimagefile("pink_hole.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("pink_hole1.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("pink_hole2.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("pink_hole3.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("pink_hole4.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);

}

void bonus_clr(int rand)
{
    readimagefile("pink_hole4.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("pink_hole3.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("pink_hole2.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("pink_hole1.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("pink_hole.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    readimagefile("hole.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
}


void bonus_enemy(int bonus,int enemy)
{

    readimagefile("pink_hole.jpg",point[bonus][0],point[bonus][1],point[bonus][2],point[bonus][3]);
    readimagefile("red_hole.jpg",point[enemy][0],point[enemy][1],point[enemy][2],point[enemy][3]);
    delay(cartoon_delay);
    readimagefile("pink_hole1.jpg",point[bonus][0],point[bonus][1],point[bonus][2],point[bonus][3]);
    readimagefile("red_hole1.jpg",point[enemy][0],point[enemy][1],point[enemy][2],point[enemy][3]);
    delay(cartoon_delay);
    readimagefile("pink_hole2.jpg",point[bonus][0],point[bonus][1],point[bonus][2],point[bonus][3]);
    readimagefile("red_hole2.jpg",point[enemy][0],point[enemy][1],point[enemy][2],point[enemy][3]);
    delay(cartoon_delay);
    readimagefile("pink_hole3.jpg",point[bonus][0],point[bonus][1],point[bonus][2],point[bonus][3]);
    readimagefile("red_hole3.jpg",point[enemy][0],point[enemy][1],point[enemy][2],point[enemy][3]);
    delay(cartoon_delay);
    readimagefile("pink_hole4.jpg",point[bonus][0],point[bonus][1],point[bonus][2],point[bonus][3]);
    readimagefile("red_hole4.jpg",point[enemy][0],point[enemy][1],point[enemy][2],point[enemy][3]);


}

void bonus_enemy_clr(int bonus,int enemy,int clr)
{
    if(clr!=1)
    readimagefile("pink_hole4.jpg",point[bonus][0],point[bonus][1],point[bonus][2],point[bonus][3]);
    readimagefile("red_hole4.jpg",point[enemy][0],point[enemy][1],point[enemy][2],point[enemy][3]);
    delay(cartoon_delay);
    if(clr!=1)
    readimagefile("pink_hole3.jpg",point[bonus][0],point[bonus][1],point[bonus][2],point[bonus][3]);
    readimagefile("red_hole3.jpg",point[enemy][0],point[enemy][1],point[enemy][2],point[enemy][3]);
    delay(cartoon_delay);
    if(clr!=1)
    readimagefile("pink_hole2.jpg",point[bonus][0],point[bonus][1],point[bonus][2],point[bonus][3]);
    readimagefile("red_hole2.jpg",point[enemy][0],point[enemy][1],point[enemy][2],point[enemy][3]);
    delay(cartoon_delay);
    if(clr!=1)
    readimagefile("pink_hole1.jpg",point[bonus][0],point[bonus][1],point[bonus][2],point[bonus][3]);
    readimagefile("red_hole1.jpg",point[enemy][0],point[enemy][1],point[enemy][2],point[enemy][3]);
    delay(cartoon_delay);
    if(clr!=1)
    readimagefile("pink_hole.jpg",point[bonus][0],point[bonus][1],point[bonus][2],point[bonus][3]);
    readimagefile("red_hole.jpg",point[enemy][0],point[enemy][1],point[enemy][2],point[enemy][3]);
    delay(cartoon_delay);
    readimagefile("hole11.jpg",point[bonus][0],point[bonus][1],point[bonus][2],point[bonus][3]);
    readimagefile("hole.jpg",point[enemy][0],point[enemy][1],point[enemy][2],point[enemy][3]);


}


void dim_enemy(int dim,int rand)
{
    readimagefile("hole2.jpg",point[dim][0],point[dim][1],point[dim][2],point[dim][3]);
    readimagefile("red_hole.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("hole3.jpg",point[dim][0],point[dim][1],point[dim][2],point[dim][3]);
    readimagefile("red_hole1.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("hole4.jpg",point[dim][0],point[dim][1],point[dim][2],point[dim][3]);
    readimagefile("red_hole2.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("hole5.jpg",point[dim][0],point[dim][1],point[dim][2],point[dim][3]);
    readimagefile("red_hole3.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("hole6.jpg",point[dim][0],point[dim][1],point[dim][2],point[dim][3]);
    readimagefile("red_hole4.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
}

void dim_enemy_clr(int dim,int rand,int clr)
{
    if(clr!=1)
    readimagefile("hole7.jpg",point[dim][0],point[dim][1],point[dim][2],point[dim][3]);
    readimagefile("red_hole4.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    if(clr!=1)
    readimagefile("hole8.jpg",point[dim][0],point[dim][1],point[dim][2],point[dim][3]);
    readimagefile("red_hole3.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    if(clr!=1)
    readimagefile("hole9.jpg",point[dim][0],point[dim][1],point[dim][2],point[dim][3]);
    readimagefile("red_hole2.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    if(clr!=1)
    readimagefile("hole10.jpg",point[dim][0],point[dim][1],point[dim][2],point[dim][3]);
    readimagefile("red_hole1.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("hole11.jpg",point[dim][0],point[dim][1],point[dim][2],point[dim][3]);
    readimagefile("red_hole.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    readimagefile("hole.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
}

void enemy(int rand)
{
    readimagefile("red_hole.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("red_hole1.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("red_hole2.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("red_hole3.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("red_hole4.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);

}


void enemy_clr(int rand)
{
    readimagefile("red_hole4.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("red_hole3.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("red_hole2.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("red_hole1.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("red_hole.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    readimagefile("hole.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
}


void dim(int rand)
{
    readimagefile("hole2.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("hole3.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("hole4.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("hole5.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("hole6.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);

}



void dim_clr(int rand)
{
    readimagefile("hole5.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("hole4.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("hole3.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("hole2.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
    delay(cartoon_delay);
    readimagefile("hole.jpg",point[rand][0],point[rand][1],point[rand][2],point[rand][3]);
}
