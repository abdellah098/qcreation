#include<fent.h>

fenetre::fenetre():QWidget()
{
    setFixedSize(300,150);
    m_buttonDialog=new QPushButton("Boite de dialogue",this);
    m_buttonDialog->move(70,60);


QObject::connect(m_buttonDialog,SIGNAL(clicked(bool)),this,SLOT(ouvrirDialogue()));
}
fenetre::~fenetre()
{
    delete m_buttonDialog;
}

void fenetre::ouvrirDialogue()
{
 QMessageBox::question(this,"titre de la fenetre","Avez-vous une ambition en cours d'exécution?");
}
