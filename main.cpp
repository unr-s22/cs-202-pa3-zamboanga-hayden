//Made by Hayden Zamboanga and Kyle Leake

#include "Account.h"
#include "Money.h"
#include <iostream>
#include <vector>

int main() {



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
