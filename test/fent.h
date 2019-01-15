#ifndef FENT_H
#define FENT_H
#include<QApplication>
#include<QWidget>
#include<QPushButton>
#include<QSlider>
#include<QLCDNumber>

class fenetre :public QWidget
{private:
    QLCDNumber  *m_lcd;
    QSlider  *m_slider;

public:
    fenetre();
    ~fenetre();
};

#endif // FENT_H
