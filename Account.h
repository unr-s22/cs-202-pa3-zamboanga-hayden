//Made by Hayden Zamboanga

#ifndef CODE2_ACCOUNT_H
#define CODE2_ACCOUNT_H
#include <iostream>
#include <vector>
#include "Money.h"
class Account {
private:
	bool flag = false;
	std::vector<Money> withdrawls;
	std::vector<Money> deposits;
	std::vector<Money> initalDeposit;
	Money currentBal {};

public:
	explicit Account();

	void makeDeposit(Money &money);
	void makeWithdrawl(Money &money);
	Money* returnCurrentBal();
	friend std::ostream &operator << (std::ostream &out, Account &a);

	virtual ~Account();

};

#endif //CODE2_ACCOUNT_H
