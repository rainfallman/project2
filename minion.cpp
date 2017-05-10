#include "minion.h"

void minion::moveoattack(int a,int  b,int c)
{

}

minion::minion(int g,int a,int inputx,int inputy)
{
        group=g;
        x=inputx;
        y=inputy;
        if(a==1)
        {
            hp=100;
            attack=100;
            range=100;
            move=50;
            picture=new QGraphicsPixmapItem(QPixmap(":res/dragon.png"));
        }
        if(a==2)
        {
            hp=200;
            attack=100;
            range=100;
            move=50;
            picture=new QGraphicsPixmapItem(QPixmap(":res/dragon.png"));
        }
        if(a==3)
        {
            hp=300;
            attack=100;
            range=100;
            move=50;
            picture=new QGraphicsPixmapItem(QPixmap(":res/dragon.png"));
        }
        if(a==4)
        {
            hp=400;
            attack=100;
            range=100;
            move=50;
            picture=new QGraphicsPixmapItem(QPixmap(":res/dragon.png"));
        }
}
