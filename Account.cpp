//Made by Hayden Zamboanga

#include "Account.h"

Account::Account() {
}

void Account::makeDeposit(Money &money) {
	deposits.push_back(money);
	flag = true;

}

void Account::makeWithdrawl(Money &money) {
	withdrawls.push_back(money);
	flag = true;

}

Money* Account::returnCurrentBal() {
	if (flag == true) {
		currentBal = currentBal - currentBal;
		for (int i = 0; i < deposits.size(); i++) {
			currentBal = currentBal + deposits[i];
		}
		for (int j = 0; j < withdrawls.size(); j++) {
			currentBal = currentBal - withdrawls[j];
		}
		flag = false;
		return &currentBal;
	}
}

std::ostream &operator << (std::ostream &out, Account &a) {
	int num1 = 1;
	int num2 = 1;

	out << "Account Details\n--------------------------\nCurrent Balance: " << *a.returnCurrentBal() << "\n--------------------------\nNumber of Deposits: " << a.deposits.size() << "\n--------------------------\n";
	for (int i = 0; i < a.deposits.size(); i++) {
		out << "(" << num1 << ") " << a.deposits[i] << std::endl;
		num1++;
	}
	out << "--------------------------\nNumber of Withdrawls: " << a.withdrawls.size() << "\n--------------------------\n";
	for (int j = 0; j < a.withdrawls.size(); j++) {
		out << "(" << num2 << ") " << a.withdrawls[j] << std::endl;
		num2++;
	}

	return out;
}

Account::~Account() {}
