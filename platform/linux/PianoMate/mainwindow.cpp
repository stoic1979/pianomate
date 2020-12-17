#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->musicSheetWidget->setSource(QUrl::fromLocalFile(":/MusicSheet.qml"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

