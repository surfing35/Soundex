//
// Created by CCEClass1 on 12/13/2018.
//

#ifndef FIRSTEXAMPLE_SOUNDEX_H
#define FIRSTEXAMPLE_SOUNDEX_H
#include <iostream>
#include <string>
using namespace std;

class Soundex {

public:
    string encode(const string& word) const;
private:
    string add0Pad(const string& word) const;
    string head(const string& word) const;
    string encodeDigits(const string& word) const;
    string encodeDigit(char letter) const;
};


#endif //FIRSTEXAMPLE_SOUNDEX_H
