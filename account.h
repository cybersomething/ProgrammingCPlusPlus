#pragma once
#include <iostream>
#include <string>
using namespace std;

class account
{
private:
	int AccountID;
	double balance = 0;

public:
	account(float);
	~account();
	int getBalance();
	int CustomerID;

	//functions

	double checkBalance();
	double withdrawBalance();
	double withdrawBalance(int);
	double depositBalance();

	double setBalance();
};

