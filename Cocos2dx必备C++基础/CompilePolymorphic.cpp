#include <iostream>
#include <string>
using namespace std;
void print(int i)
{
	cout << "print a integer:" << i << endl;
}

void print(double d)
{
	cout << "print a double:" << d << endl;
}

void print(string s)
{
	cout << "print a string:" << s << endl; 
}

void print(char c)
{
	cout << "print a char:" << c << endl; 
}

int main(int argc, char const *argv[])
{
	print(2);
	print(3.5);
	print("hell world");
	print('H');
	return 0;
}