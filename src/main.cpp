//
// Created by Moad, Karl on 9/19/18.
//

#include <QtWidgets>
#include <QApplication>
#include "Application.h"

int main(int argc, char *argv[]) {

    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication::setStyle(QStyleFactory::create("Fusion"));
    QCoreApplication::setOrganizationDomain(Configuration::OrgDomain);
    QCoreApplication::setOrganizationName(Configuration::OrgName);
    QCoreApplication::setApplicationName(Configuration::AppName);

    QApplication a(argc, argv);




    a.setWindowIcon(QIcon(":/images/scouts2.png"));

    mainwindow w;
    w.show();
    a.setActiveWindow(&w);

    int ret = a.exec();
    return ret;
}