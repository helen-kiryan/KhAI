#include <QApplication>
#include <QPushButton>
 change 1

int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QPushButton button("Hello, World!");
button.resize(200, 60);
button.show( );
 
return app.exec( );
}
