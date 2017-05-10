#include "minions.h"
#include <QGraphicsPixmapItem>




minions::minions()
{
    picture=new QGraphicsPixmapItem(QPixmap(":/res/dragon.png"));


}
/*
int minions::showpicture(QGraphicsScene *s,int x, int y)
{
    s->addItem(battlemap[x][y].picture);
    battlemap[x][y].picture->setPos(x*50,y*50);
    return 0;
}

void minions::moveorattack(int x, int y)
{


}
*/

