#ifndef VINGENERE_H
#define VINGENERE_H

#include <QString>
#include <QChar>

class Vingenere
{
public:
    Vingenere();
    QString cipherText(QString text, QString code);
    QString deCipherText(QString text, QString code);
    QString cleanString(QString text);
private:
    const int nLetters = 33;
    const QString RU_UP = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
    const QString RU_LO = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
    char cipherLetter(char text, char code);
};

#endif // VINGENERE_H
