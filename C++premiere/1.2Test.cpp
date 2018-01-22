#include <iostream>
using namespace std;

//练习1.3
// int main(int argc, char const *argv[])
// {
// 	cout << "hello world!" << endl;
// 	return 0;
// }

//练习1.4
// int main(int argc, char const *argv[])
// {
// 	cout << "Please Enter two numbers:" << endl;
// 	int v1 =0 , v2 = 0;
// 	cin >> v1 >> v2;
// 	cout << "The Product of " << v1 << " and " << v2 << " is " << v1 * v2 << endl;
// 	return 0;
// }

//练习1.5
int main(int argc, char const *argv[])
{
	cout <<"please enter two numbers:" ;
	cout << endl;
	double v1 = 0.0, v2 = 0.0;//为什么第二个参数为0呢?
	cin >> v1 >> v2;
	cout << "the product of " << v1 << "and" << v2 << "is" << v1 * v2;
	cout << endl;
	return 0;
}

