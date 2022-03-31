//made by kyle leake

#ifndef MONEY_H
#define MONEY_H
#include <iostream>

class Money {
private:
	int m_cents;
	int m_dollars;
public:
	Money();
	Money(int dollars, int cents);

	int getMoney();
	
	friend std::ostream  &operator<<(std::ostream &output, Money &m);
	bool operator>(const Money &m);
	bool operator<=(const Money &m);
	bool operator>=(const Money &m);
	bool operator!=(const Money &m);
	bool operator<(const Money &m);
	bool operator==(const Money &m);
	Money operator+(const Money &m);
	Money operator-(const Money &m);

};
	
#endif
