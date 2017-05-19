#include "minion.h"

void minion::moveoattack(int a,int  b,int c)
{

}

minion::minion(int g,int a,int inputx,int inputy)
{
        group=g;
        x=inputx;
        y=inputy;
        if(a==0)
        {
            hp=0;
            attack=0;
            range=0;
            move=0;
            picture=new QGraphicsPixmapItem(QPixmap(":res/gamecrashp.png"));
        }
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
            picture=new QGraphicsPixmapItem(QPixmap(":res/god.png"));
        }
        if(a==3)
        {
            hp=300;
            attack=100;
            range=100;
            move=50;
            picture=new QGraphicsPixmapItem(QPixmap(":res/blueeye.png"));
        }
        if(a==4)
        {
            hp=400;
            attack=100;
            range=100;
            move=50;
            picture=new QGraphicsPixmapItem(QPixmap(":res/yee.png"));
        }
        if(a==5)
        {
            hp=400;
            attack=100;
            range=100;
            move=50;
            picture=new QGraphicsPixmapItem(QPixmap(":res/trumpheadm.png"));
        }
        if(a==6)
        {
            hp=400;
            attack=100;
            range=100;
            move=50;
            picture=new QGraphicsPixmapItem(QPixmap(":res/trumpleftm.png"));
        }
        if(a==7)
        {
            hp=400;
            attack=100;
            range=100;
            move=50;
            picture=new QGraphicsPixmapItem(QPixmap(":res/trumprightm.png"));
        }
        if(a==8)
        {
            hp=400;
            attack=100;
            range=100;
            move=50;
            picture=new QGraphicsPixmapItem(QPixmap(":res/trumpleftlm.png"));
        }
        if(a==9)
        {
            hp=400;
            attack=100;
            range=100;
            move=50;
            picture=new QGraphicsPixmapItem(QPixmap(":res/trumprightlm.png"));
        }
}
