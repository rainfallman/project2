#ifndef MINIONS_H
#define MINIONS_H
#include <QGraphicsPixmapItem>
#include "mainwindow.h"
class minions: public QGraphicsPixmapItem
{
public:
    int hp,attack,move,range_x,range_y,x,y,group;
    minions();
   // int showpicture(QGraphicsScene *s,int x,int y);
   // void moveorattack(int x,int y );



    QGraphicsPixmapItem *picture;

};



#endif // MINIONS_H
