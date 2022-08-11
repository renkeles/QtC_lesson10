#include "language.h"
#include <QDebug>

Language::Language()
{
    lang = Language::CodeLanguage::ru;
}

Language::CodeLanguage Language::getLang() const
{
    return lang;
}

bool Language::setLang(CodeLanguage cl)
{
    if(lang == cl) return false;
    if(cl == CodeLanguage::ru)
    {
        lang = cl;
        return true;
    }

    if(cl == CodeLanguage::en)
    {
        lang = cl;
        return true;
    }
    return false;
}

bool Language::setLang(CodeLanguage cl, QTranslator *qtr)
{

    if(lang == cl) return false;
    if(cl == CodeLanguage::ru)
    {
        lang = cl;
        qtr->load(":/language/qm/QtLanguage_ru.qm");
        return true;
    }

    if(cl == CodeLanguage::en)
    {
        lang = cl;
        qtr->load(":/language/qm/QtLanguage_en.qm");
        return true;
    }
    return false;

}

bool operator== (const Language &l1, const Language &l2)
{
    return(l1.getLang() == l2.getLang());
}





