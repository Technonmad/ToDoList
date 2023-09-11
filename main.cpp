#include "mainwindow.h"

#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow mainWindow;

    mainWindow.show();
    return a.exec();
}
