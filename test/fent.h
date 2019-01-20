#ifndef FENT_H
#define FENT_H
#include<QApplication>
#include<QWidget>
#include<QPushButton>
#include<QSlider>

class fenetre :public QWidget
{private:

    QSlider  *m_slider;

public:
    fenetre();
    ~fenetre();
};

#endif // FENT_H
