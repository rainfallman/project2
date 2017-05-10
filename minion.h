#ifndef MINION_H
#define MINION_H
#include <QGraphicsPixmapItem>

class minion
{
public:
    int hp,attack,range,group,move,x,y;
    QGraphicsPixmapItem *picture;
    void moveoattack(int a, int b, int c);
    minion(int g, int a, int inputx, int inputy);
};

#endif // MINION_H
