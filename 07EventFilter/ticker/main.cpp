#include <QApplication>

#include "ticker.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Ticker ticker;
    ticker.setWindowTitle(QObject::tr("Ticker"));
    ticker.setText(QObject::tr("There is no charge for Awesomeness !! -Kung Fu Panda "));
    ticker.show();
    return app.exec();
}
