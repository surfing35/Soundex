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

    //Assert
    ASSERT_THAT(soundex.encode("I"), Eq("I000"));
}

TEST_F(SoundexEncoding, ConvertConsenantwithDefinedDigits)
{
    //Arrange @ class fixture

    //Act

    //Note: EXPECT does not fail test, assert does.
    ASSERT_THAT(soundex.encode("Ab"), Eq("A100"));
    ASSERT_THAT(soundex.encode("Ac"), Eq("A200"));
    ASSERT_THAT(soundex.encode("Ad"), Eq("A300"));
    EXPECT_THAT(soundex.encode("Dn"), Eq("D500"));
    EXPECT_THAT(soundex.encode("xx"), Eq("x200"));
}


