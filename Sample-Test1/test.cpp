#include "pch.h"
#include "../Day8_cal/cal.cpp"

using namespace std;

class AccountFixture:public testing::Test
{
public:
	Account account{ 10000 };
};

TEST_F(AccountFixture, CreateAccountInit1000won) {

	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, Withdraw) {
	account.withdraw(500);
	EXPECT_EQ(9500, account.getBalance());
}

TEST_F(AccountFixture, Interestrate) {
	account.interestrate(5);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, compoundinterest) {
	account.compoundinterest(2);
	EXPECT_EQ(11025, account.getBalance());
}