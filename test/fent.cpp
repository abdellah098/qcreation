#include<fent.h>

fenetre::fenetre():QWidget()
{
    setFixedSize(300,150);


   m_slider=new QSlider(Qt::Horizontal, this);//pour que le curseur soit horizontal on ajout Qt::Horizontal
   m_slider->setGeometry(50,90,200,10);


}
fenetre::~fenetre()
{
    delete m_slider;
}
