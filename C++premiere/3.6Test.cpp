#include <iostream>
using namespace std;
// using int_array = int[4];
//test 3.43
// int main(int argc, char const *argv[])
// {
// 	int ai[3][4] = {
// 		{1,2,3,4},
// 		{5,6,7,8},
// 		{9,10,11,12}
// 	};
	//1.版本1范围for循环
	// for( int (&p)[4]:ai)
	// {
	// 	for (int &q:p)
	// 		cout << q << " ";
	// 	cout << endl;
	// }

	//2.版本2普通for循环,使用下标
	// for (int i = 0; i<3 ;i++)
	// {
	// 	for (int j = 0; j< 4; j++)
	// 		cout << ai[i][j] << "," ;
	// 	cout<< ";" << endl;
	// }

	//3.版本3普通for循环,使用指针
// 	for (int (*p)[4] = ai ; p !=  ai + 3 ; p++ )
// 	{
// 		for (int *q = *p; q != *p +4 ; q++)
// 			cout << *q << ",";
// 		cout << ";" << endl;
// 	}

// 	return 0;
// }


//test 3.44

// int main(int argc, char const *argv[])
// {
// 	int ai[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
// 	cout << "利用范围for语句输出多维数组的内容:  " << endl;
// 	for (int_array &q : ai)
// 	{
// 		for (int &p : q)
// 			cout << p << " ";
// 		cout << ";" << endl;
// 	}

//     cout << "利用普通for语句和下标运算符输出多维数组的内容:" << endl;
//     for(int i = 0 ;i< 3 ; i++)
//     {
//     	for(int j = 0 ; j < 4 ; j++)
//     		cout << ai[i][j] << " " ;
//     	cout << ";" << endl;
//     }


//     cout << "利用普通for语句和指针输出多维数组的内容:" << endl;
//     for(int_array * q ; q != ai+3 ;q ++)
//     {
//     	for (int * p = *q ; p != *q + 4; p ++)
//     		cout << *p << "  ";
//     	cout << ";" << endl;
//     }
// 	return 0;
// }



//test 3.45
int main(int argc, char const *argv[])
{
	int ai[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	// 1.版本1范围for循环
	for(auto &p:ai)
	{
		for (auto q:p)
			cout << q << " ";
		cout << ";" << endl;
	}

	// 2.版本2普通for循环,使用下标
	for (int i = 0; i<3 ;i++)
	{
		for (int j = 0; j< 4; j++)
			cout << ai[i][j] << "," ;
		cout<< ";" << endl;
	}

	// 3.版本3普通for循环,使用指针
	for (auto p = ai ; p !=  ai + 3 ; p++ )
	{
		for (auto q = *p; q != *p +4 ; q++)
			cout << *q << ",";
		cout << ";" << endl;
	}

	return 0;
}