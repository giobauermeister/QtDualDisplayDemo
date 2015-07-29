#include "demoembarcados.h"
#include "toradexproducts.h"
#include "ui_demoembarcados.h"
#include <QFile>
#include <QPlainTextDocumentLayout>
#include <QDebug>
#include <QProcess>
#include <QThread>


demoembarcados::demoembarcados(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::demoembarcados)
{

    //FILE RESOURCES DECLARATION
#ifdef ARM
    xColibriVF50Foto = QPixmap("/home/root/resources/colibri-vf50");
    xColibriVF50Txt = QString("/home/root/resources/vf50txt");
    QFile xColibriVF50File(xColibriVF50Txt);
    QString xColibriVF50Video ("/home/root/resources/colibrivf50Specs");

    xColibriVF61Foto = QPixmap("/home/root/resources/colibri-vf61");
    xColibriVF61Txt = QString("/home/root/resources/vf61txt");
    QFile xColibriVF61File(xColibriVF61Txt);
    QString xColibriVF61Video ("/home/root/resources/colibrivf61Specs");

    xColibriiMX6sFoto = QPixmap("/home/root/resources/colibri-imx6s");
    xColibriiMX6sTxt = QString("/home/root/resources/imx6stxt");
    QFile xColibriiMX6sFile(xColibriiMX6sTxt);
    QString xColibriiMX6sVideo ("/home/root/resources/colibriimx6Specs");

    xColibriiMX6dlFoto = QPixmap("/home/root/resources/colibri-imx6dl");
    xColibriiMX6dlTxt = QString("/home/root/resources/imx6dltxt");
    QFile xColibriiMX6dlFile(xColibriiMX6dlTxt);
    QString xColibriiMX6dlVideo ("/home/root/resources/colibriimx6Specs");

    xColibriT20Foto = QPixmap("/home/root/resources/colibri-t20");
    xColibriT20Txt = QString("/home/root/resources/t20txt");
    QFile xColibriT20File(xColibriT20Txt);
    QString xColibriT20Video ("/home/root/resources/colibriimx6Specs");

    xColibriT30Foto = QPixmap("/home/root/resources/colibri-t30");
    xColibriT30Txt = QString("/home/root/resources/t30txt");
    QFile xColibriT30File(xColibriT30Txt);
    QString xColibriT30Video ("/home/root/resources/colibriimx6Specs");
#endif
#ifdef DESKTOP
    xColibriVF50Foto = QPixmap("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibri-vf50");
    xColibriVF50Txt = QString("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/vf50txt");
    QFile xColibriVF50File(xColibriVF50Txt);
    QString xColibriVF50Video("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibrivf50Specs");

    xColibriVF61Foto = QPixmap("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibri-vf61");
    xColibriVF61Txt = QString("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/vf61txt");
    QFile xColibriVF61File(xColibriVF61Txt);
    QString xColibriVF61Video("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibrivf61Specs");

    xColibriiMX6sFoto = QPixmap("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibri-imx6s");
    xColibriiMX6sTxt = QString("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/imx6stxt");
    QFile xColibriiMX6sFile(xColibriiMX6sTxt);
    QString xColibriiMX6sVideo("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibriimx6Specs");

    xColibriiMX6dlFoto = QPixmap("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibri-imx6dl");
    xColibriiMX6dlTxt = QString("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/imx6dltxt");
    QFile xColibriiMX6dlFile(xColibriiMX6dlTxt);
    QString xColibriiMX6dlVideo("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibriimx6Specs");

    xColibriT20Foto = QPixmap("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibri-t20");
    xColibriT20Txt = QString("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/t20txt");
    QFile xColibriT20File(xColibriT20Txt);
    QString xColibriT20Video("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibriimx6Specs");

    xColibriT30Foto = QPixmap("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibri-t30");
    xColibriT30Txt = QString("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/t30txt");
    QFile xColibriT30File(xColibriT30Txt);
    QString xColibriT30Video("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibriimx6Specs");
#endif





    ui->setupUi(this);

    ui->txtSpecs->setStyleSheet("QTextEdit { background-color: transparent; border: transparent }");
    ui->pushbtRight->setStyleSheet("QPushButton { background-color: transparent }");
    ui->pushbtLeft->setStyleSheet("QPushButton { background-color: transparent }");
    ui->btnBack->setStyleSheet("QPushButton { background-color: transparent }");
    ui->btnHome->setStyleSheet("QPushButton { background-color: transparent }");
    ui->btnimx6dl->setStyleSheet("QPushButton { background-color: transparent }");
    ui->btnimx6s->setStyleSheet("QPushButton { background-color: transparent }");
    ui->btnt20->setStyleSheet("QPushButton { background-color: transparent }");
    ui->btnt30->setStyleSheet("QPushButton { background-color: transparent }");
    ui->btnvf50->setStyleSheet("QPushButton { background-color: transparent }");
    ui->btnvf61->setStyleSheet("QPushButton { background-color: transparent }");
    ui->mainWidget->setStyleSheet("QWidget { background-color: transparent }");

#ifdef ARM
    QPixmap xbtnLeft("/home/root/resources/arrowleft.png");
    QPixmap xbtnRight("/home/root/resources/arrow.png");
    QPixmap xTopbar("/home/root/resources/Toradex.png");
    QPixmap xDownbar("/home/root/resources/Toradex_Down.png");
    QPixmap xLogo("/home/root/resources/toradex-logo-white.png");
    QPixmap xbtnHome("/home/root/resources/home_btn.png");
    QPixmap xbtnBack("/home/root/resources/arrowleft.png");
    QPixmap xvf50("/home/root/resources/colibri-vf50");
    QPixmap xvf61("/home/root/resources/colibri-vf61");
    QPixmap ximx6s("/home/root/resources/colibri-imx6s");
    QPixmap ximx6dl("/home/root/resources/colibri-imx6dl");
    QPixmap xt20("/home/root/resources/colibri-t20");
    QPixmap xt30("/home/root/resources/colibri-t30");
#endif
#ifdef DESKTOP
    QPixmap xbtnLeft("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/arrowleft.png");
    QPixmap xbtnRight("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/arrow.png");
    QPixmap xTopbar("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/Toradex.png");
    QPixmap xDownbar("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/Toradex_Down.png");
    QPixmap xLogo("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/toradex-logo-white.png");
    QPixmap xbtnHome("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/home_btn.png");
    QPixmap xbtnBack("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/arrowleft.png");
    QPixmap xvf50("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibri-vf50");
    QPixmap xvf61("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibri-vf61");
    QPixmap ximx6s("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibri-imx6s");
    QPixmap ximx6dl("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibri-imx6dl");
    QPixmap xt20("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibri-t20");
    QPixmap xt30("/home/prjs/Qtworkspace/DemoExperience5.0/demoExperience/colibri-t30");
#endif

    ui->pushbtLeft->setIcon(xbtnLeft);
    ui->pushbtRight->setIcon(xbtnRight);

    ui->btnBack->setIcon(xbtnBack);
    ui->btnHome->setIcon(xbtnHome);

    ui->btnvf50->setIcon(xvf50);
    ui->btnvf61->setIcon(xvf61);
    ui->btnimx6s->setIcon(ximx6s);
    ui->btnimx6dl->setIcon(ximx6dl);
    ui->btnt20->setIcon(xt20);
    ui->btnt30->setIcon(xt30);

    ui->label->setPixmap(xTopbar);
    ui->label_2->setPixmap(xDownbar);
    ui->label_3->setPixmap(xLogo);

    ui->pushbtRight->setFlat(true);
    ui->pushbtLeft->setFlat(true);
    ui->btnBack->setFlat(true);
    ui->btnHome->setFlat(true);

    ui->btnimx6dl->setFlat(true);
    ui->btnimx6s->setFlat(true);
    ui->btnt20->setFlat(true);
    ui->btnt30->setFlat(true);
    ui->btnvf50->setFlat(true);
    ui->btnvf61->setFlat(true);

//    QString script = "/home/root/resources/argument.sh";
//    QString killscript = "/home/root/resources/kill.sh";

    script = QString("/home/root/resources/argument.sh");
    //killscript = QString("/home/root/resources/kill.sh");
    killscript = QString("/home/root/resources/kill2.sh");

    QProcess *myScript = new QProcess();
    //QProcess *killScript = new QProcess();

    //killarg << "kill";
    //killScript->start(killscript, killarg);
    //killScript->start(killscript);
    //killScript->kill();

    arguments << "video1";
    myScript->start(script, arguments);
    //qDebug("video1 rodando");

    //ColibrVF50
    if (xColibriVF50File.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString xColibriVF50Html = xColibriVF50File.readAll();
        ui->txtSpecs->setHtml(xColibriVF50Html);
    }
    ui->Modulo->setPixmap(xColibriVF50Foto);

    ui->Modulo->show();

    //show modules menu
    ui->menuWidget->show();
    ui->mainWidget->hide();        
    screenState = 1;

    lInput = 0;

}

demoembarcados::~demoembarcados()
{
    delete ui;
}

void demoembarcados::on_pushbtRight_clicked()
{
    lInput = lInput+1;
    if(lInput > 5)lInput = 0;

    QProcess *myScript = new QProcess();
    QProcess *killScript = new QProcess();

    killScript->start(killscript);

    arguments.clear();

    switch(lInput)
    {
    case 0:
        {
        //ColibriVF50
        QFile xColibriVF50File(xColibriVF50Txt);
        if (xColibriVF50File.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QString xColibriVF50Html = xColibriVF50File.readAll();
            ui->txtSpecs->setHtml(xColibriVF50Html);
        }
        ui->Modulo->setPixmap(xColibriVF50Foto);
        arguments << "video1";
        killScript->waitForFinished(2000);
        myScript->start(script, arguments);
        qDebug("video1 rodando");
        }
        break;
    case 1:
        {
        //ColibriVF61
        QFile xColibriVF61File(xColibriVF61Txt);
        if (xColibriVF61File.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QString xColibriVF61Html = xColibriVF61File.readAll();
            ui->txtSpecs->setHtml(xColibriVF61Html);
        }
        ui->Modulo->setPixmap(xColibriVF61Foto);
        arguments << "video2";
        killScript->waitForFinished(2000);
        myScript->start(script, arguments);
        qDebug("video2 rodando");
        }
        break;
    case 2:
        {
        //ColibriiMX6S
        QFile xColibriiMX6sFile(xColibriiMX6sTxt);
        if (xColibriiMX6sFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QString xColibriiMX6sHtml = xColibriiMX6sFile.readAll();
            ui->txtSpecs->setHtml(xColibriiMX6sHtml);
        }
        ui->Modulo->setPixmap(xColibriiMX6sFoto);
        arguments << "video3";
        killScript->waitForFinished(2000);
        myScript->start(script, arguments);
        qDebug("video3 rodando");
        }
        break;
    case 3:
        {
        //ColibriiMX6DL
        QFile xColibriiMX6dlFile(xColibriiMX6dlTxt);
        if (xColibriiMX6dlFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QString xColibriiMX6dlHtml = xColibriiMX6dlFile.readAll();
            ui->txtSpecs->setHtml(xColibriiMX6dlHtml);
        }
        ui->Modulo->setPixmap(xColibriiMX6dlFoto);
        arguments << "video4";
        killScript->waitForFinished(2000);
        myScript->start(script, arguments);
        qDebug("video4 rodando");
        }
        break;
    case 4:
        {
        //ColibriT20
        QFile xColibriT20File(xColibriT20Txt);
        if (xColibriT20File.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QString xColibriT20Html = xColibriT20File.readAll();
            ui->txtSpecs->setHtml(xColibriT20Html);
        }
        ui->Modulo->setPixmap(xColibriT20Foto);
        arguments << "video5";
        killScript->waitForFinished(2000);
        myScript->start(script, arguments);
        qDebug("video5 rodando");
        }
        break;
    case 5:
        {
        //ColibriT30
        QFile xColibriT30File(xColibriT30Txt);
        if (xColibriT30File.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QString xColibriT30Html = xColibriT30File.readAll();
            ui->txtSpecs->setHtml(xColibriT30Html);
        }
        ui->Modulo->setPixmap(xColibriT30Foto);
        arguments << "video6";
        killScript->waitForFinished(2000);
        myScript->start(script, arguments);
        qDebug("video6 rodando");
        }
        break;
//    case 6:
//        //Apalis iMX6D
//        if (xApalisiMX6dFile.open(QIODevice::ReadOnly | QIODevice::Text))
//        {
//            QString xApalisiMX6dHtml = xApalisiMX6dFile.readAll();
//            ui->txtSpecs->setHtml(xApalisiMX6dHtml);
//        }
//        ui->Modulo->setPixmap(xApalisiMX6dFoto);
//        break;
//    case 7:
//        //Apalis iMX6Q
//        if (xApalisiMX6qFile.open(QIODevice::ReadOnly | QIODevice::Text))
//        {
//            QString xApalisiMX6qHtml = xApalisiMX6qFile.readAll();
//            ui->txtSpecs->setHtml(xApalisiMX6qHtml);
//        }
//        ui->Modulo->setPixmap(xApalisiMX6qFoto);
//        break;
    }

}

void demoembarcados::on_pushbtLeft_clicked()
{
    lInput = lInput-1;
    if(lInput < 0)lInput = 5;

    QProcess *myScript = new QProcess();
    QProcess *killScript = new QProcess();

    killScript->start(killscript);

    arguments.clear();

    switch(lInput)
    {
    case 0:
        {
        //ColibriVF50
        QFile xColibriVF50File(xColibriVF50Txt);
        if (xColibriVF50File.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QString xColibriVF50Html = xColibriVF50File.readAll();
            ui->txtSpecs->setHtml(xColibriVF50Html);
        }
        ui->Modulo->setPixmap(xColibriVF50Foto);
        arguments << "video1";
        killScript->waitForFinished(2000);
        myScript->start(script, arguments);
        qDebug("video1 rodando");
        }
        break;
    case 1:
        {
        //ColibriVF61
        QFile xColibriVF61File(xColibriVF61Txt);
        if (xColibriVF61File.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QString xColibriVF61Html = xColibriVF61File.readAll();
            ui->txtSpecs->setHtml(xColibriVF61Html);
        }
        ui->Modulo->setPixmap(xColibriVF61Foto);
        arguments << "video2";
        killScript->waitForFinished(2000);
        myScript->start(script, arguments);
        qDebug("video2 rodando");
        }
        break;
    case 2:
        {
        //ColibriiMX6S
        QFile xColibriiMX6sFile(xColibriiMX6sTxt);
        if (xColibriiMX6sFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QString xColibriiMX6sHtml = xColibriiMX6sFile.readAll();
            ui->txtSpecs->setHtml(xColibriiMX6sHtml);
        }
        ui->Modulo->setPixmap(xColibriiMX6sFoto);
        arguments << "video3";
        killScript->waitForFinished(2000);
        myScript->start(script, arguments);
        qDebug("video3 rodando");
        }
        break;
    case 3:
        {
        //ColibriiMX6DL
        QFile xColibriiMX6dlFile(xColibriiMX6dlTxt);
        if (xColibriiMX6dlFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QString xColibriiMX6dlHtml = xColibriiMX6dlFile.readAll();
            ui->txtSpecs->setHtml(xColibriiMX6dlHtml);
        }
        ui->Modulo->setPixmap(xColibriiMX6dlFoto);
        arguments << "video4";
        killScript->waitForFinished(2000);
        myScript->start(script, arguments);
        qDebug("video4 rodando");
        }
        break;
    case 4:
        {
        //ColibriT20
        QFile xColibriT20File(xColibriT20Txt);
        if (xColibriT20File.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QString xColibriT20Html = xColibriT20File.readAll();
            ui->txtSpecs->setHtml(xColibriT20Html);
        }
        ui->Modulo->setPixmap(xColibriT20Foto);
        arguments << "video5";
        killScript->waitForFinished(2000);
        myScript->start(script, arguments);
        qDebug("video5 rodando");
        }
        break;
    case 5:
        {
        //ColibriT30
        QFile xColibriT30File(xColibriT30Txt);
        if (xColibriT30File.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QString xColibriT30Html = xColibriT30File.readAll();
            ui->txtSpecs->setHtml(xColibriT30Html);
        }
        ui->Modulo->setPixmap(xColibriT30Foto);
        arguments << "video6";
        killScript->waitForFinished(2000);
        myScript->start(script, arguments);
        qDebug("video6 rodando");
        }
        break;
//    case 6:
//        //Apalis iMX6D
//        if (xApalisiMX6dFile.open(QIODevice::ReadOnly | QIODevice::Text))
//        {
//            QString xApalisiMX6dHtml = xApalisiMX6dFile.readAll();
//            ui->txtSpecs->setHtml(xApalisiMX6dHtml);
//        }
//        ui->Modulo->setPixmap(xApalisiMX6dFoto);
//        break;
//    case 7:
//        //Apalis iMX6Q
//        if (xApalisiMX6qFile.open(QIODevice::ReadOnly | QIODevice::Text))
//        {
//            QString xApalisiMX6qHtml = xApalisiMX6qFile.readAll();
//            ui->txtSpecs->setHtml(xApalisiMX6qHtml);
//        }
//        ui->Modulo->setPixmap(xApalisiMX6qFoto);
//        break;
    }

}

void demoembarcados::on_btnHome_clicked()
{
    ui->mainWidget->hide();
    ui->menuWidget->show();
    screenState = 1;
}

void demoembarcados::on_btnBack_clicked()
{    
    if(screenState == 1)
    {
        ui->mainWidget->show();
        ui->menuWidget->hide();
        screenState = 0;
    }
    else
    {
        ui->mainWidget->hide();
        ui->menuWidget->show();
        screenState = 1;
    }
}

void demoembarcados::on_btnvf50_clicked()
{
    lInput = 0;

    ui->mainWidget->show();
    ui->menuWidget->hide();

    QProcess *myScript = new QProcess();
    QProcess *killScript = new QProcess();

    killScript->start(killscript);

    arguments.clear();

    //ColibriVF50
    QFile xColibriVF50File(xColibriVF50Txt);
    if (xColibriVF50File.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString xColibriVF50Html = xColibriVF50File.readAll();
        ui->txtSpecs->setHtml(xColibriVF50Html);
    }
    ui->Modulo->setPixmap(xColibriVF50Foto);
    arguments << "video1";
    killScript->waitForFinished(2000);
    myScript->start(script, arguments);
}

void demoembarcados::on_btnvf61_clicked()
{
    lInput = 1;

    ui->mainWidget->show();
    ui->menuWidget->hide();

    QProcess *myScript = new QProcess();
    QProcess *killScript = new QProcess();

    killScript->start(killscript);

    arguments.clear();

    //ColibriVF61
    QFile xColibriVF61File(xColibriVF61Txt);
    if (xColibriVF61File.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString xColibriVF61Html = xColibriVF61File.readAll();
        ui->txtSpecs->setHtml(xColibriVF61Html);
    }
    ui->Modulo->setPixmap(xColibriVF61Foto);
    arguments << "video2";
    killScript->waitForFinished(2000);
    myScript->start(script, arguments);

}

void demoembarcados::on_btnimx6s_clicked()
{
    lInput = 2;

    ui->mainWidget->show();
    ui->menuWidget->hide();

    QProcess *myScript = new QProcess();
    QProcess *killScript = new QProcess();

    killScript->start(killscript);

    arguments.clear();

    //ColibriiMX6S
    QFile xColibriiMX6sFile(xColibriiMX6sTxt);
    if (xColibriiMX6sFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString xColibriiMX6sHtml = xColibriiMX6sFile.readAll();
        ui->txtSpecs->setHtml(xColibriiMX6sHtml);
    }
    ui->Modulo->setPixmap(xColibriiMX6sFoto);
    arguments << "video3";
    killScript->waitForFinished(2000);
    myScript->start(script, arguments);
}

void demoembarcados::on_btnimx6dl_clicked()
{
    lInput = 3;

    ui->mainWidget->show();
    ui->menuWidget->hide();

    QProcess *myScript = new QProcess();
    QProcess *killScript = new QProcess();

    killScript->start(killscript);

    arguments.clear();

    //ColibriiMX6DL
    QFile xColibriiMX6dlFile(xColibriiMX6dlTxt);
    if (xColibriiMX6dlFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString xColibriiMX6dlHtml = xColibriiMX6dlFile.readAll();
        ui->txtSpecs->setHtml(xColibriiMX6dlHtml);
    }
    ui->Modulo->setPixmap(xColibriiMX6dlFoto);
    arguments << "video4";
    killScript->waitForFinished(2000);
    myScript->start(script, arguments);
}

void demoembarcados::on_btnt20_clicked()
{
    lInput = 4;

    ui->mainWidget->show();
    ui->menuWidget->hide();

    QProcess *myScript = new QProcess();
    QProcess *killScript = new QProcess();

    killScript->start(killscript);

    arguments.clear();

    //ColibriT20
    QFile xColibriT20File(xColibriT20Txt);
    if (xColibriT20File.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString xColibriT20Html = xColibriT20File.readAll();
        ui->txtSpecs->setHtml(xColibriT20Html);
    }
    ui->Modulo->setPixmap(xColibriT20Foto);
    arguments << "video5";
    killScript->waitForFinished(2000);
    myScript->start(script, arguments);
}

void demoembarcados::on_btnt30_clicked()
{
    lInput = 5;

    ui->mainWidget->show();
    ui->menuWidget->hide();

    QProcess *myScript = new QProcess();
    QProcess *killScript = new QProcess();

    killScript->start(killscript);

    arguments.clear();

    //ColibriT30
    QFile xColibriT30File(xColibriT30Txt);
    if (xColibriT30File.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString xColibriT30Html = xColibriT30File.readAll();
        ui->txtSpecs->setHtml(xColibriT30Html);
    }
    ui->Modulo->setPixmap(xColibriT30Foto);
    arguments << "video6";
    killScript->waitForFinished(2000);
    myScript->start(script, arguments);
}
