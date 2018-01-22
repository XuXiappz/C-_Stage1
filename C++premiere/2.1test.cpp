
//test 2.3-2.4
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	unsigned u = 10, u2 = 42;
// 	cout << u - u2 << endl;//4294967264 (4294967295+1 - 32)
// 	cout << u2 - u << endl;//32

// 	int i = 10, i2 = 42;
// 	cout << i2 - i << endl;//32
// 	cout << i - i2 << endl;//-32
// 	cout << i -u << endl;//0
// 	cout << u - i << endl;//0
// 	return 0;
// }


//test 2.8
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	cout << "2\x4d\012";
	cout << "2\t\x4d\012";
	return 0;
}
