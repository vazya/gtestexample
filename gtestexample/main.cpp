#include "gtest\gtest.h"

class CRectTest : public ::testing::Test {
};

TEST_F(CRectTest, TwiceTwoIsFour)
{
	ASSERT_TRUE(2 + 2 == 34);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	system("pause");
	return 0;
}