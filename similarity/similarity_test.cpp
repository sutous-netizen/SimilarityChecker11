#include "gmock/gmock.h"
#include "similarity.cpp"
#include <string>

using std::string;

TEST(Length, split) {
	LengthChecker lengthChecker;
	string inStr1 = "ASD", inStr2 = "DSA";
	int expect = 60;
	int actual = lengthChecker.comp(inStr1, inStr2);

	EXPECT_EQ(expect, actual);
}