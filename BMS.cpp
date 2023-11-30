#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;

class Bank {
	string name, address;
	char acc_type;
	float balance;

public:
	void open_account();
	void deposit_money();
	void withdraw_money();
	void display_account();
};

void Bank::open_account()
{
	cout<<"Enter your full name: ";
    cin >> name;
    cout<<endl;

	cout << "Enter your address: ";
	cin	>> address;
    cout << endl;

	cout << "What type of account you want"
		<< " to open saving(S) or Current(C): ";
	cin	>> acc_type;
    cout << endl;

	cout << "Enter How much money you want to deposit: ";
	cin	>> balance;
    cout << endl;

	cout << "Account Created Successfully";
}

void Bank::deposit_money()
{
	int Amount;
	cout << "Enter how much money"
		<< " you want to deposit: ";
	cin	>> Amount;
    cout << endl;

	balance += Amount;
	cout << "\n Available Balance: "
		<< balance;
}

void Bank::display_account()
{
	cout << "Name: " << name << endl
		<< "Address: " << address << endl
		<< "Type: " << acc_type << endl
		<< "Balance: " << balance << endl
		<< endl;
}

void Bank::withdraw_money()
{
	float amount;
	cout << "Enter how much money "
		<< "you want to withdraw: ";
	cin	>> amount;
    cout << endl;

	balance -= amount;
	cout << "\n Available balance: "
		<< balance;
}

int main()
{
	int choice;

	Bank customer;

	cout << "\n1) Open account \n\n";
	customer.open_account();
	cout << "\n------------------------"
		<< "-------------------------\n";

	cout << "\n2) Deposit account \n\n";
	customer.deposit_money();
	cout << "\n------------------------"
		<< "-------------------------\n";

	cout << "\n2) Withdraw money \n\n";
	customer.withdraw_money();
	cout << "\n------------------------"
		<< "-------------------------\n";

	cout << "\n4) Display Account \n\n";
	customer.display_account();
	cout << "\n------------------------"
		<< "-------------------------\n";

	return 0;
}
