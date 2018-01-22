#include <iostream>
int main(int argc, char const *argv[])
{
	int integerVar = 9;
	float floatVar = 33.79;
	double doubleVar = 8.44e+3;
	char charVar = 'W';
	bool boolVar = true;

	std::cout << "integerVar" << integerVar << "\n";
	std::cout << "floatVar" << floatVar << "\n";
	std::cout << "doubleVar" << doubleVar << "\n";
	std::cout << "charVar" << charVar << "\n";
	std::cout << "boolVar" << boolVar << "\n";

	return 0;
}