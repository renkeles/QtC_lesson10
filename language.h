#ifndef LANGUAGE_H
#define LANGUAGE_H
#include <QTranslator>

class Language
{
public:
    enum class CodeLanguage{ru, en, es};
    Language();
    bool setLang(CodeLanguage cl);
    bool setLang(CodeLanguage cl, QTranslator *qtr);
    CodeLanguage getLang() const;

    friend bool operator== (const Language &l1, const Language &l2);

private:
    CodeLanguage lang;
};

#endif // LANGUAGE_H
