#include "account.h"

account::account(float i)
{
	balance = i;
}

account::~account()
{
}

int account::getBalance()
{
	return balance;
}


double account::checkBalance()
{
	cout << "Your account balance is: " << balance << endl;
	return balance;
}

double account::depositBalance()
{
	int amount;
	cout << "How much would you like to deposit" << endl;
	cin >> amount;
	balance = balance + amount;
	cout << "Balance: " << balance << endl;

	return balance;
}

double account::withdrawBalance()
{
	int amount;
	cout << "How much would you like to withdraw" << endl;
	cin >> amount;
	balance = balance - amount;
	cout << "Balance: " << balance << endl;

	return  balance;
}

double account::withdrawBalance(int i)
{

	balance = balance - i;
	cout << "Balance is: " << balance << endl;

	return  balance;
}

