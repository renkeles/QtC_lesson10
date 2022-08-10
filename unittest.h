#ifndef UNITTEST_H
#define UNITTEST_H

#include <QObject>
#include <QtTest/QTest>

class unittest : public QObject
{
    Q_OBJECT
public:
    explicit unittest(QObject *parent = nullptr);

signals:

private:


private slots:
    void setLanguage();
};

#endif // UNITTEST_H
