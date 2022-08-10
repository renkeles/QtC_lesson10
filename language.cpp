#include "language.h"

Language::Language()
{

}

bool Language::setLang(CodeLanguage cl, QTranslator *qtr)
{

    if(cl == CodeLanguage::ru)
    {
       qtr->load(":/language/qm/QtLanguage_ru.qm");
       return true;
    }

    if(cl == CodeLanguage::en)
    {
        qtr->load(":/language/qm/QtLanguage_en.qm");
        return true;
    }

    return false;

}


