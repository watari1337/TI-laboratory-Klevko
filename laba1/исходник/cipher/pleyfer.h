#ifndef PLEYFER_H
#define PLEYFER_H

#include <QString>
#include <array>
#include <QVector>

using Table = std::array< std::array< QChar, 5>, 5>;

class Pleyfer
{
public:
    Pleyfer();
    QString cleanCode(QString code);
    QString cipherText(QString text, Table code1, Table code2, Table code3, Table code4);
    QString deCipherText(QString text, Table code1, Table code2, Table code3, Table code4);

private:
    void findLetter(QChar letter, Table code, int *x, int *y);
    const int nLetters = 26;
    const QString EN_UP = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const QString EN_LO = "abcdefghijklmnopqrstuvwxyz";

};

#endif // PLEYFER_H
