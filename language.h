#ifndef LANGUAGE_H
#define LANGUAGE_H
#include <QTranslator>

class Language
{
public:
    Language();
    enum CodeLanguage {ru, en};
    bool setLang(CodeLanguage cl, QTranslator &qtr);

};



#endif // LANGUAGE_H
