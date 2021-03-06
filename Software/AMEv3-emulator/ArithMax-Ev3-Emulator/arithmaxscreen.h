#ifndef ARITHMAXSCREEN_H
#define ARITHMAXSCREEN_H

#include <QWidget>
#include <QQueue>
#include <QSemaphore>
#include <QMutex>

#include <queue>

class QArithMaxScreen : public QWidget
{
    Q_OBJECT
public:
    explicit QArithMaxScreen(QWidget *parent = 0);
    unsigned char ScreenData[12][32]; //96x32x1 bit
    //int lastkey;
    //int aKeyPressed;
    //QQueue<unsigned char> keys;
    std::queue<unsigned char> keys;
    QMutex keysLocked;
    
signals:
    
protected:
    void paintEvent ( QPaintEvent * event );
public slots:

};

#endif // ARITHMAXSCREEN_H
