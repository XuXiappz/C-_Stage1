#include <iostream>
using namespace std;

// /*
// * 注释对/* */不能嵌套.
// *"不能嵌套"几个字被认为是源码
// *像剩余程序一样处理
// */
int main(int argc, char const *argv[])
{

	cout << "this is a test!"<<endl;
	cout << "/*";//true
	cout << "*/";//true
	cout << /* "*/" */";
	cout << /* "*/"/*"/*"*/;
	
	return 0;
}