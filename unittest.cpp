#include "unittest.h"
#include "mainwindow.h"
#include <QTranslator>

unittest::unittest(QObject *parent) : QObject(parent)
{

}

void unittest::setLanguage()
{
    Language l;
    QTranslator qtr;

    l.setLang(l.ru, &qtr);
}


