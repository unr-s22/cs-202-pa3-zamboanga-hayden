//Made by Hayden Zamboanga and Kyle Leake

#include "Account.h"
#include "Money.h"
#include <iostream>
#include <vector>

int main() {

	Account account;

	Money accountStart(300, 23);
	account.makeDeposit(accountStart);

	std::cout << account << std::endl;

	Money deposit1(200, 0);
	Money deposit2(300, 24);
	Money deposit3(501, 22);

	account.makeDeposit(deposit1);
	account.makeDeposit(deposit2);
	account.makeDeposit(deposit3);

	std::cout << account << std::endl;

	Money withdrawl1(300, 10);
	Money withdrawl2(201, 34);

	account.makeWithdrawl(withdrawl1);
	account.makeWithdrawl(withdrawl2);

	std::cout << account << std::endl;

	Money w(100, 10);
	Money x(5,15);
	Money y(100,10);
	Money z(5,15);


	if (w <= z){
		std::cout << "relational operator '>=' is correct" << std::endl;
	};
	if (w> x){
		std::cout << "relational operator '>' is correct" << std::endl;
	};
	if (x < w){
		std::cout << "relational operator '<' is correct" << std::endl;
	};
	if (w != x){
		std::cout << "relational operator '!=' is correct" << std::endl;
	};
	if (w >= x){
		std::cout << "relational operator '>=' is correct" << std::endl;
	};
	if (w >= y){
		std::cout << "relational operator '>=' is correct" << std::endl;
	};
	if (x <= w){
		std::cout << "relational operator '<=' is correct" << std::endl;
	};
	if (w== y){
		std::cout << "relational operator '==' is correct" << std::endl;
	};
	


return 0;



}
