//
// Created by CCEClass1 on 12/13/2018.
//
#include <unordered_map>
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
        return encodeDigit(word[1]);
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

string Soundex::encodeDigit(char letter) const{

    const unordered_map<char, string> encoding{
            {'b', "1"},
            {'f', "1"},
            {'p', "1"},
            {'v', "1"},
            {'c', "2"},
            {'g', "2"},
            {'j', "2"},
            {'k', "2"},
            {'q', "2"},
            {'s', "2"},
            {'x', "2"},
            {'z', "2"},
            {'d', "3"},
            {'t', "3"},
            {'l', "4"},
            {'m', "5"},
            {'n', "5"},
            {'r', "6"}
    };


    return encoding.find(letter)->second;
}
