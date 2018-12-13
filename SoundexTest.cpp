#include "gmock/gmock.h"
#include <iostream>
#include <string>
#include "Soundex.h"

using namespace std;



using ::testing::Eq;
// Create a class fixture
class SoundexEncoding: public testing::Test
{
public:
    Soundex soundex;
};

TEST_F(SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{
    //Arrange

   //Act

   //Assert
   ASSERT_THAT(soundex.encode("A"), Eq("A000"));
}

TEST_F(SoundexEncoding, PadsWithZerosToEnsureThreeDigits)
{
    //Arrange @ class fixture

    //Act

    //Assert
    ASSERT_THAT(soundex.encode("I"), Eq("I000"));
}

TEST_F(SoundexEncoding, ConvertConsenantwithDefinedDigits)
{
    //Arrange @ class fixture

    //Act

    //Assert
    ASSERT_THAT(soundex.encode("Ab"), Eq("A100"));
}


