#ifndef FENT_H
#define FENT_H
#include<QApplication>
#include<QWidget>
#include<QPushButton>
#include<QSlider>

class fenetre :public QWidget
{  Q_OBJECT
private:

    QSlider  *m_slider;
    QSlider  *m_slider1;
public slots:
    void changerLargeur(int largeur);
    void changerHauteur(int hauteur);
public:
    fenetre();
    ~fenetre();
};

#endif // FENT_H
