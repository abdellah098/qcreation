#ifndef FENT_H
#define FENT_H
#include<QApplication>
#include<QWidget>
#include<QPushButton>
#include<QMessageBox>

class fenetre :public QWidget
{
    Q_OBJECT
   public:
   fenetre();
   ~fenetre();

   public slots:
   void ouvrirDialogue();

   private:
   QPushButton *m_buttonDialog;
};

#endif // FENT_H
