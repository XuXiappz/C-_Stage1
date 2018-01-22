#include <iostream>

int main ()
{
	int a[10] = {1,2,3,4,5,6,7,8,9};
	int len = sizeof(a)/sizeof(a[0]);
	for (int i = 0;i < len ;i ++)
	{
		std::cout << "a[i]" << a[i] << "\n";
	}
	return 0;
}