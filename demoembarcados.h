#ifndef DEMOEMBARCADOS_H
#define DEMOEMBARCADOS_H

#include <QMainWindow>
#include <QFile>
#include <QProcess>

#define ARM
//#define DESKTOP

namespace Ui {
class demoembarcados;

}

class demoembarcados : public QMainWindow
{
    Q_OBJECT

public:
    explicit demoembarcados(QWidget *parent = 0);
    ~demoembarcados();

private slots:
    void on_pushbtRight_clicked();

    void on_pushbtLeft_clicked();

    void on_btnHome_clicked();

    void on_btnBack_clicked();

    void on_btnvf50_clicked();

    void on_btnvf61_clicked();

    void on_btnimx6s_clicked();

    void on_btnimx6dl_clicked();

    void on_btnt20_clicked();

    void on_btnt30_clicked();

private:
    Ui::demoembarcados *ui;
    int lInput;
    int screenState;
    QString imxSpecs;
    QString vf61Specs;
    QStringList arguments;
    QStringList killarg;
    QString script;
    QString killscript;


    QPixmap xColibriVF50Foto;
    QString xColibriVF50Txt;
    QString xColibriVF50Video;

    QPixmap xColibriVF61Foto;
    QString xColibriVF61Txt;
    QString xColibriVF61Video;

    QPixmap xColibriiMX6sFoto;
    QString xColibriiMX6sTxt;
    QString xColibriiMX6sVideo;

    QPixmap xColibriiMX6dlFoto;
    QString xColibriiMX6dlTxt;
    QString xColibriiMX6dlVideo;

    QPixmap xColibriT20Foto;
    QString xColibriT20Txt;
    QString xColibriT20Video;

    QPixmap xColibriT30Foto;
    QString xColibriT30Txt;
    QString xColibriT30Video;





};

#endif // DEMOEMBARCADOS_H
