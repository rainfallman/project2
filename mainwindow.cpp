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




}


MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::mousePressEvent(QMouseEvent *e)
{
    if(nowbattletime==1)
    {
        minion *temp=new minion(1,1,e->x()-41,e->y()-52);
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
    minidatapicture=new QGraphicsPixmapItem;
    minidatapicture->setPixmap(QPixmap(":/res/dargon.png"));
    scene->addItem(minidatapicture);
    minidatapicture->setPos(0,0);
    delete ui->startgame;
    delete ui->normal;
    delete ui->hard;
    delete ui->veryhard;
}

void MainWindow::on_hard_clicked()
{
    placebase->setPixmap(QPixmap(":/res/place.png"));
    placebase->setPos(0, 0);
    nowbattletime=1;
    delete ui->startgame;
    delete ui->normal;
    delete ui->hard;
    delete ui->veryhard;
}

void MainWindow::on_veryhard_clicked()
{
    placebase->setPixmap(QPixmap(":/res/place.png"));
    placebase->setPos(0, 0);
    nowbattletime=1;
    delete ui->startgame;
    delete ui->normal;
    delete ui->hard;
    delete ui->veryhard;
}
