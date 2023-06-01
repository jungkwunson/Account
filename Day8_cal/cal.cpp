class Account
{
public:
	explicit Account(int money):balance(money)
	{
		
	}

	int getBalance()
	{
		return balance;
	}

	void deposit(int money)
	{
		balance += money;
	}

	void withdraw(int money)
	{
		balance -= money;
	}

	void interestrate(int r)
	{
		this->rate = r;		
		balance = (balance * (100 + rate)) / 100;
	}

	void compoundinterest(int n)
	{
		for(int i = 0; i < n; i++)
		{
			interestrate(this->rate);
		}
	}

private:
	int balance = 10000;
	int rate = 5;
	
};