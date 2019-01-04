#include<QApplication>
#include<QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    QPushButton bouton("Hello world");
    bouton.setText("Hello the world");
    bouton.setToolTip("Texte d'aide");
    bouton.setFont(QFont("aakar",15,QFont::Bold,true));
    bouton.setCursor(Qt::PointingHandCursor);
    bouton.show();

    return app.exec();
}
