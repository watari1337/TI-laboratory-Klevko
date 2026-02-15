#include "pleyfer.h"

Pleyfer::Pleyfer() {}

QString Pleyfer::cleanCode(QString code)
{
    code = code.toUpper();
    QString letters = "ABCDEFGHIKLMNOPQRSTUVWXYZ";
    QString result = "";
    foreach (QChar letter, code){
        if (letters.indexOf(letter) != -1){
            result += letter;
            letters.remove(letter);
        } else if (letter == "J" && letters.indexOf("I") != -1){
            result += "I";
            letters.remove("I");
        }
    }
    result += letters;
    return result;
}

QString Pleyfer::cipherText(QString text, Table code1, Table code2, Table code3, Table code4)
{
    QString result = "";
    text = text + "X";
    QChar first = '0', second = '0';
    QString badPart = "";
    foreach (QChar letter, text) {
        if (EN_UP.indexOf(letter) != -1 || EN_LO.indexOf(letter) != -1){
            if (first == '0') {
                first = letter;
                badPart = "";
            }
            else second = letter;
        } else{
            if (first == '0') result += letter;
            else badPart += letter;
        }
        if (first != '0' && second != '0'){
            int x2, y2;
            int x4, y4;
            findLetter(first, code2, &x2, &y2);
            findLetter(second, code4, &x4, &y4);
            if (EN_LO.indexOf(first) != -1) result += code1[x2][y4].toLower();
            else result += code1[x2][y4];
            result += badPart;
            if (EN_LO.indexOf(second) != -1) result += code3[x4][y2].toLower();
            else result += code3[x4][y2];
            first = '0';
            second = '0';
        }
    }
    return result;
}

QString Pleyfer::deCipherText(QString text, Table code1, Table code2, Table code3, Table code4)
{
    QString result = "";
    text = text + "X";
    QChar first = '0', second = '0';
    QString badPart = "";
    foreach (QChar letter, text) {
        if (EN_UP.indexOf(letter) != -1 || EN_LO.indexOf(letter) != -1){
            if (first == '0') {
                first = letter;
                badPart = "";
            }
            else second = letter;
        } else{
            if (first == '0') result += letter;
            else badPart += letter;
        }
        if (first != '0' && second != '0'){
            int x1, y1;
            int x3, y3;
            findLetter(first, code1, &x1, &y1);
            findLetter(second, code3, &x3, &y3);
            if (EN_LO.indexOf(first) != -1) result += code2[x1][y3].toLower();
            else result += code2[x1][y3];
            result += badPart;
            if (EN_LO.indexOf(second) != -1) result += code4[x3][y1].toLower();
            else result += code4[x3][y1];
            first = '0';
            second = '0';
        }
    }
    return result;
}

void Pleyfer::findLetter(QChar letter, Table code, int *x, int *y)
{
    letter = letter.toUpper();
    if (letter == 'J') letter = 'I';
    for (size_t i = 0; i < code.size(); ++i) {
        for (size_t j = 0; j < code[i].size(); ++j) {
            if (letter == code[i][j]) {
                *x = i;
                *y = j;
                return;
            }
        }
    }
}
