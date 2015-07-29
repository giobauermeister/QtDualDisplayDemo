#ifndef SHOWVF50_H
#define SHOWVF50_H

#include <QMainWindow>
#include <QObject>
#include <QSharedDataPointer>
#include <QWidget>

class showVF50Data;

class showVF50
{
public:
    showVF50();
    showVF50(const showVF50 &);
    showVF50 &operator=(const showVF50 &);
    ~showVF50();

private:
    QSharedDataPointer<showVF50Data> data;
};

#endif // SHOWVF50_H
