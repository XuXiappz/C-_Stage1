// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	cin >> int input_value;
// 	cout << "input_value" << input_value << endl;//int type undeclare ;input_value undeclare

// 	int i = {3.14};
// 	cout << i << endl;//3

// 	double salary = wage = 9999.99;//wage undeclare
// 	cout << salary << "and" << wage << endl;

// 	int i = 3.14;
// 	cout << i << endl;//3

// 	double a = 3.1415167;
// 	int b = {a};
// 	cout << "a" << a <<" b " << b << endl;

// 	return 0;
// }

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int i = 42;
	int &r1 = i;
	int const &r2 = i;
	r1 = 45;
	cout << i << " " << r1  << "  " << r2 << endl;
	return 0;
}