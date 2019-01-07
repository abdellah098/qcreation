#include<QApplication>
#include<QPushButton>
#include"fent.h"

int main(int argc, char *argv[])
{
    QApplication aps(argc,argv);
    fenetre fente;

    fente.show();

    return aps.exec();

}
