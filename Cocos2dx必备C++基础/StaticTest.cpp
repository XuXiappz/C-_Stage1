#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
	double acmount;
	string owner;

public:
	static double insterestRate;
	Account(double pAcmount,string pOwner)
	{
		acmount = pAcmount;
		owner = pOwner;
	}
	static double getInsterestRate ()
	{
		return insterestRate;
	}
};

double Account::insterestRate = 0.589;

int main(int argc, char const *argv[])
{
	Account account = Account(1000.0,"Tom");
	double rate1 = Account::insterestRate;
	double rate2 = Account::getInsterestRate();
	double rate3 = account.getInsterestRate();
    double rate4 = account.insterestRate;

	cout << "rate1:" << rate1 << endl;
	cout << "rate2:" << rate2 << endl;
	cout << "rate3:" << rate3 << endl;
	cout << "rate4:" << rate4 << endl;

	cout << "---------------------" << endl;
	Account * pAccount = &account;
	cout << "acmount:" << pAccount->acmount << endl;
	cout << "owner:" << pAccount->owner << endl;
	cout << "rate:" << pAccount->insterestRate << endl;
	cout << "rate1:" << pAccount->getInsterestRate() << endl;
	return 0;
}