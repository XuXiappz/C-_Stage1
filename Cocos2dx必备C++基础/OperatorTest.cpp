#include <iostream>
int main(int argc, char const *argv[])
{
	int i = 0;
	int a = 10;
	int b = 9;
	if ((a > b ) | (i++ == 1)){
		std:: cout << "a>b" << "\n";
	}else{
		std:: cout << "a<b" << "\n";
	}

	std:: cout << "i = " << i << "\n";
	return 0;
}