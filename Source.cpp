#include <iostream>
#include "account.h"
#include "customer.h"

using namespace std;

void calcInterest(double balance)
{
	double interest = 0.20;
	double interestCalc = interest*balance;

	cout << "The interest gained is: " << interestCalc << endl;
}

double applyLoan(double balance)
{
	int loanTaken;
	double loanMax = balance * 2;
	cout << "The maximum loan you can take out is: " << loanMax << endl;
	cin >> loanTaken;

	if (loanTaken > loanMax)
	{
		cout << "Your new balance is: " << balance + loanTaken << endl;

		return balance;
	}
	else
	{
		cout << "Unfortunately, your loan has not been approved, try again later." << endl;
	}
}

int main()
{
	const int num_customers = 100; //max number of customers stored on the array
	const int num_accounts = 3; //max number of credit cards user can have

	customer customers[num_customers];

	for (int i = 0; i < num_customers; i++)
	{
		customers[i] = customer(i + 1);
		//cout << "Please enter a name." << endl;
		//cin >> name;
		//customers[i].setName(name);
	}

	customer* customerPtrsArray[num_accounts]; //array for pointers to point to memory address of customer accounts.
	for (int i = 0; i < num_accounts; i++)
	{
		customerPtrsArray[i] = NULL; //stops null pointer errors occurring
	}

	customerPtrsArray[0] = &customers[0];
	customerPtrsArray[1] = &customers[1];

	for (int j = 0; j < num_accounts; j++)
	{
		for (int i = 0; i < num_accounts; i++)
		{
			customer* c = customerPtrsArray[j];

			if (c != NULL)
			{
				cout << "Customer " << customers[i].getID() << ":  has ID" << c->getID() << endl;
			}
		}
	}

	customerPtrsArray[2] = &customers[9]; //
	customerPtrsArray[0]->setID(999); //call the setIDfunction on the object stored at the memory address in the pointerarray[0]

	//print result same as before

	//print car ids to test that the setID function call has worked
	for (int i = 0; i < num_customers; i++) 
	{
		cout << "Customer " << i << ":  has account ID" << customers[i].getID() << endl;
	}


	int test;
	int value = 0;
	int teller_value = 0;

	//customer customer1(1);
	account account1(500);

	//customer1.getID();

	//string name = customer1.getName();
	int balance = account1.getBalance();

	while (teller_value != 4)
	{
		cout << "Option 1: Add a new customer" << endl;
		cout << "Option 2: Add a new account" << endl;
		cout << "Option 3: Access customer account" << endl;
		cout << endl;

		cin >> teller_value;

		switch (value)
		{
		case 1:;
		}
	}


	while (value != 8) 
	{
		cout << "What operation would you like to perform?" << endl;
		cout << "Option 1: Check Balance" << endl;
		cout << "Option 2: Deposit Value" << endl;
		cout << "Option 3: Withdraw Value" << endl;
		cout << "Option 4: Withdraw £10" << endl;
		cout << "Option 5: Check Interest" << endl;
		cout << "Option 6: Apply for a Loan" << endl;
		cout << "Option 7: Quit" << endl;
		cout << endl;

		cin >> value;

		switch (value)
		{
		case 1: account1.checkBalance(); break;
		case 2: account1.depositBalance(); break;
		case 3: account1.withdrawBalance(); break;
		case 4: account1.withdrawBalance(10); break;
		case 5: calcInterest(balance); break;
		case 6: applyLoan(balance); break;
		case 7: cout << "Program Exited" << endl; return 0;
		default: cout << "Please select an option."; break;
		}
	}


	return 0;

	cin >> test;

	return 0;
}