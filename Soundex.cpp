//
// Created by CCEClass1 on 12/13/2018.
//

#include "Soundex.h"


string Soundex::encode(const string& word) const
{

    return add0Pad(head(word) + encodeDigits(word));
}

/**
 * @brief Encode the string into digits using Soundex rules
 * @param word
 * @return
 */
string Soundex::encodeDigits(const string& word) const
{
    if(word.length() > 1)
    {
        return "1";
    }

    return "";
}

/**
 * @brief pad word to four digits
 * @returns word padded to 4 digits
 */
string Soundex::add0Pad(const string& word) const
{
    int zerosNeeded = 4 - word.length();
    return word + string(zerosNeeded, '0');
}

string Soundex::head(const string &word) const {
    return word.substr(0,1);
}
