#include<QApplication>
#include<QPushButton>

int main(int argc, char *argv[])
{/*

   Dans cette partie j'apprends à faire des boutons QPushbutton
   puis à faire des boutons dans des fénètres QWidgets


   */
    QApplication app(argc,argv);
    //QPushButton bouton("Hello world");
    //bouton.setText("Hello the world");
    //creation d'une fenetre qui contiendra le bouton

    QWidget fenetre;
    fenetre.setFixedSize(300,200);//largeur 300 et longueur 200
   QPushButton bouton("salut les potes",&fenetre);
    bouton.setToolTip("Texte d'aide");
    bouton.setFont(QFont("aakar",15,QFont::Bold,true));
    bouton.setCursor(Qt::PointingHandCursor);
    bouton.setIcon(QIcon("pic.png"));//ne marche pas
    bouton.move(60,70);// décalage vers la droite=60 et vers le bas 90
   // bouton.show();
    fenetre.show();

    return app.exec();
}
