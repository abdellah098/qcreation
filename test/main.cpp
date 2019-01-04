#include<QApplication>
#include<QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    QPushButton bouton("Hello world");
    bouton.show();

    return app.exec();
}
