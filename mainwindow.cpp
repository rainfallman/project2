#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    scene(new QGraphicsScene(0,0,1000,1000))
{
    ui->setupUi(this);
    ui->graphicsView->setScene(scene);
    placebase= new QGraphicsPixmapItem(QPixmap(":/res/place.png"));

            scene->addItem(placebase);
            placebase->setPos(0, 0);

 // placebase->setPixmap(QPixmap(":res/New piskel.png"));
 //  placebase->setPos(0, 0);



}


MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::mousePressEvent(QMouseEvent *e)
{
    list.push_back(minion(1,1,e->x(),e->y()));
    for(auto cyclelist:list)
    {
        scene->addItem(cyclelist.picture);
        cyclelist.picture->setPos(cyclelist.x,cyclelist.y);
    }

}
