#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    scene(new QGraphicsScene(0,0,1000,1000))
{
    ui->setupUi(this);
    ui->graphicsView->setScene(scene);
    ui->normal->close();
    ui->hard->close();
    ui->veryhard->close();
    placebase= new QGraphicsPixmapItem(QPixmap(":/res/startpicture.png"));
    scene->addItem(placebase);
    srand(time(NULL));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::mousePressEvent(QMouseEvent *e)
{

    if(nowbattletime==1&&minipress!=0)
    {

        minion *temp=new minion(1,minipress,e->x(),e->y());
        list.push_back(*temp);
        scene->addItem(temp->picture);
        minion *entemp=new minion(2,rand()%4+1,950-e->x(),e->y());
        list.push_back(*entemp);
        scene->addItem(entemp->picture);
            for(auto cyclelist:list)
            {
                cyclelist.picture->setPos(cyclelist.x-41,cyclelist.y-52);
            }
    }
    if(nowbattletime==2)
    {
        minion *temp=new minion(1,0,e->x()-200,e->y()-90);
        list.push_back(*temp);
        scene->addItem(temp->picture);
            for(auto cyclelist:list)
            {
                cyclelist.picture->setPos(cyclelist.x,cyclelist.y);
            }
    }


}

void MainWindow::on_startgame_clicked()
{
    ui->normal->show();
    ui->hard->show();
    ui->veryhard->show();


}


void MainWindow::on_normal_clicked()
{
    placebase->setPixmap(QPixmap(":/res/place.png"));
    placebase->setPos(0, 0);
    nowbattletime=1;
    minidatapicture[0]=new QGraphicsPixmapItem;
    minidatapicture[0]->setPixmap(QPixmap(":/res/dragoncard.png"));
    scene->addItem(minidatapicture[0]);
    minidatapicture[0]->setPos(290,750);
    minidatapicture[1]=new QGraphicsPixmapItem;
    minidatapicture[1]->setPixmap(QPixmap(":/res/godcard.png"));
    scene->addItem(minidatapicture[1]);
    minidatapicture[1]->setPos(400,750);
    minidatapicture[2]=new QGraphicsPixmapItem;
    minidatapicture[2]->setPixmap(QPixmap(":/res/blueeyecard.png"));
    scene->addItem(minidatapicture[2]);
    minidatapicture[2]->setPos(510,750);
    minidatapicture[3]=new QGraphicsPixmapItem;
    minidatapicture[3]->setPixmap(QPixmap(":/res/yeecard.png"));
    scene->addItem(minidatapicture[3]);
    minidatapicture[3]->setPos(620,750);
    ui->startgame->hide();
    ui->normal->hide();
    ui->hard->hide();
    ui->veryhard->hide();

}

void MainWindow::on_hard_clicked()
{
    placebase->setPixmap(QPixmap(":/res/place.png"));
    placebase->setPos(0, 0);
    nowbattletime=1;
    minidatapicture[0]=new QGraphicsPixmapItem;
    minidatapicture[0]->setPixmap(QPixmap(":/res/dragoncard.png"));
    scene->addItem(minidatapicture[0]);
    minidatapicture[0]->setPos(290,750);
    minidatapicture[1]=new QGraphicsPixmapItem;
    minidatapicture[1]->setPixmap(QPixmap(":/res/godcard.png"));
    scene->addItem(minidatapicture[1]);
    minidatapicture[1]->setPos(400,750);
    minidatapicture[2]=new QGraphicsPixmapItem;
    minidatapicture[2]->setPixmap(QPixmap(":/res/blueeyecard.png"));
    scene->addItem(minidatapicture[2]);
    minidatapicture[2]->setPos(510,750);
    minidatapicture[3]=new QGraphicsPixmapItem;
    minidatapicture[3]->setPixmap(QPixmap(":/res/yeecard.png"));
    scene->addItem(minidatapicture[3]);
    minidatapicture[3]->setPos(620,750);
    ui->startgame->hide();
    ui->normal->hide();
    ui->hard->hide();
    ui->veryhard->hide();
}

void MainWindow::on_veryhard_clicked()
{
    placebase->setPixmap(QPixmap(":/res/gamecrash.png"));
    placebase->setPos(0, 0);
    nowbattletime=2;
    delete ui->startgame;
    delete ui->normal;
    delete ui->hard;
    delete ui->veryhard;
}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    switch(e->key()) {
    case Qt::Key_A:
        minipress=1;
        break;
    case Qt::Key_S:
        minipress=2;
        break;
    case Qt::Key_D:
        minipress=3;
        break;
    case Qt::Key_F:
        minipress=4;
        break;
    case Qt::Key_Z:
        minipress=5;
        break;
    }
}


