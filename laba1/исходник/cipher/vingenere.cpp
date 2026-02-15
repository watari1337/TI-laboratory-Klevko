#include "vingenere.h"

Vingenere::Vingenere() {}

QString Vingenere::cipherText(QString text, QString code)
{
    int codeIndex = 0;
    code = code.toLower();
    code = cleanString(code);
    if (code.length() < 1) return text;
    QString result = "";
    foreach (QChar letter, text) {
        if (RU_UP.indexOf(letter) != -1){
            result += RU_UP[ (RU_UP.indexOf(letter) + RU_UP.indexOf(code[codeIndex])) % nLetters];
            codeIndex = (codeIndex + 1) % code.length();
        } else if (RU_LO.indexOf(letter) != -1){
            result += RU_LO[ (RU_LO.indexOf(letter) + RU_LO.indexOf(code[codeIndex])) % nLetters];
            codeIndex = (codeIndex + 1) % code.length();
        } else {
            result += letter;
        }
    }
    return result;
}

QString Vingenere::deCipherText(QString text, QString code)
{
    int codeIndex = 0;
    code = code.toLower();
    code = cleanString(code);
    if (code.length() < 1) return text;
    QString result = "";
    foreach (QChar letter, text) {
        if (RU_UP.indexOf(letter) != -1){
            result += RU_UP[ (RU_UP.indexOf(letter) - RU_UP.indexOf(code[codeIndex]) + nLetters) % nLetters];
            codeIndex = (codeIndex + 1) % code.length();
        } else if (RU_LO.indexOf(letter) != -1){
            result += RU_LO[ (RU_LO.indexOf(letter) - RU_LO.indexOf(code[codeIndex]) + nLetters) % nLetters];
            codeIndex = (codeIndex + 1) % code.length();
        } else {
            result += letter;
        }
    }
    return result;
}

QString Vingenere::cleanString(QString text)
{
    QString result = "";
    foreach (QChar letter, text){
        if ((RU_LO.indexOf(letter) != -1) || (RU_UP.indexOf(letter) != -1)){
            result += letter;
        }
    }
    return result;
}

char Vingenere::cipherLetter(char text, char code)
{
    return 0;
}
