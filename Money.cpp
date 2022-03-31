//Made by Kyle Leake

#include "Money.h"

Money::Money() {
	m_dollars = 0;
	m_cents = 0;
}

Money::Money(int dollars, int cents) {
	m_dollars = dollars;
	m_cents = cents;
}

int Money::getMoney()
{
	return ((m_dollars*100) +m_cents);
}

std::ostream  &operator<<(std::ostream &output, Money &m)
{
	output << "$" << m.m_dollars << "." << m.m_cents;
	return output;
}

bool Money::operator>(const Money &m)
{
	return (((m_dollars*100)+m_cents) > ((m.m_dollars*100) + m.m_cents));
}
bool Money::operator<=(const Money &m)
{
	return (((m_dollars*100)+m_cents) <= ((m.m_dollars*100) + m.m_cents));
}
bool Money::operator>=(const Money &m)
{
	return (((m_dollars*100)+m_cents) >= ((m.m_dollars*100) + m.m_cents));
}
bool Money::operator!=(const Money &m)
{
	return (((m_dollars*100)+m_cents) != ((m.m_dollars*100) + m.m_cents));
}
bool Money::operator<(const Money &m)
{
	return (((m_dollars*100)+m_cents) < ((m.m_dollars*100) + m.m_cents));
}
bool Money::operator==(const Money &m)
{
	return (((m_dollars*100)+m_cents) == ((m.m_dollars*100) + m.m_cents));
}
Money Money::operator+(const Money &m)
{
	Money money;
	money.m_cents = m.m_cents + m_cents;
	money.m_dollars = m.m_dollars + m_dollars;
	return money;
}
Money Money::operator-(const Money &m)
{
	Money money;
	money.m_cents = m_cents - m.m_cents;
	money.m_dollars = m_dollars - m.m_dollars;
	return money;
}
