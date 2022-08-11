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

    QCOMPARE(l.setLang(Language::CodeLanguage::en),true);
    QCOMPARE(l.getLang(), Language::CodeLanguage::en);

    QCOMPARE(l.setLang(Language::CodeLanguage::ru),true);
    QCOMPARE(l.getLang(), Language::CodeLanguage::ru);
    QCOMPARE(l.setLang(Language::CodeLanguage::ru),false);

    QCOMPARE(l.setLang(Language::CodeLanguage::es),false);
    QCOMPARE(l.getLang(), Language::CodeLanguage::ru);

    QCOMPARE(l.setLang(Language::CodeLanguage::en, &qtr),true);
    QCOMPARE(l.getLang(), Language::CodeLanguage::en);
    QCOMPARE(l.setLang(Language::CodeLanguage::en, &qtr),false);

    QCOMPARE(l.setLang(Language::CodeLanguage::es, &qtr),false);
    QCOMPARE(l.getLang(), Language::CodeLanguage::en);

    QCOMPARE(l.setLang(Language::CodeLanguage::ru, &qtr),true);
    QCOMPARE(l.getLang(), Language::CodeLanguage::ru);

}


