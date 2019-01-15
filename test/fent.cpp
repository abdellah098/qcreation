#include<fent.h>

fenetre::fenetre():QWidget()
{
    setFixedSize(300,150);

    m_lcd=new QLCDNumber(this);
    m_lcd->setSegmentStyle(QLCDNumber::Flat);
    m_lcd->move(100,40);

   m_slider=new QSlider(Qt::Horizontal, this);//pour que le curseur soit horizontal on ajout Qt::Horizontal
  // m_slider->move(100,90);
   m_slider->setGeometry(50,90,200,10);
   QObject::connect(m_slider,SIGNAL(valueChanged(int)),m_lcd,SLOT(display(int)));

}
fenetre::~fenetre()
{
    delete m_lcd,delete m_slider;
}
