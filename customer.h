#pragma once
#include <iostream>
#include <string>
using namespace std;

class customer
{
private:
	int CustomerID = 0;
	string CustomerName = "";

public:
	customer();
	customer(int);
	~customer();

	void setID(int);
	int getID();

	void setName(string);
	string getName();

	double balance;
};

