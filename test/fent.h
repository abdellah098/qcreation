#ifndef FENT_H
#define FENT_H
#include<QApplication>
#include<QWidget>
#include<QPushButton>

class fenetre :public QWidget
{
    QPushButton *m_bouton;
public:
    fenetre();
    ~fenetre();
};

#endif // FENT_H
