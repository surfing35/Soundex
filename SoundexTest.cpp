#include "gmock/gmock.h"
#include <iostream>
#include <string>
using namespace std;

class Soundex
{

public:
    string encode(const string& word) const
    {

        return add0Pad(word);
    }

    /**
     * @brief pad word to four digits
     * @returns word padded to 4 digits
     */
    string add0Pad(const string& word) const
    {
        return word + "000";
    }

};

using ::testing::Eq;
TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{
    //Arrange
   Soundex soundex;
//   soundex.Name = "YourMom";

   //Act
   auto encode = soundex.encode("A");

   //Assert
   ASSERT_THAT(encode, Eq("A000"));
}

TEST(SoundexEncoding, PadsWithZerosToEnsureThreeDigits)
{
    //Arrange
    Soundex soundex;
//   soundex.Name = "YourMom";

    //Act
    auto encode = soundex.encode("I");

    //Assert
    ASSERT_THAT(encode, Eq("I000"));
}


