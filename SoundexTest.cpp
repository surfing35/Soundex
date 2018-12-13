#include "gmock/gmock.h"
#include <iostream>
#include <string>
using namespace std;

class Soundex
{
public:
    string encode(const string& word) const
    {
        return word;
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
   ASSERT_THAT(encode, Eq("A"));
}

