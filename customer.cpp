#include "customer.h"

customer::customer()
{
}

customer::customer(int i)
{
	CustomerID = i;
}

customer::~customer()
{
}

void customer::setID(int x)
{
	CustomerID = x;
}

int customer::getID()
{
	return CustomerID;
}

void customer::setName(string n)
{
	CustomerName = n;
}

string customer::getName()
{
	return CustomerName;
}
