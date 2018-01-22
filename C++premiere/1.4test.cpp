#include <iostream>
using namespace std;

//test 1.9
// int main(int argc, char const *argv[])
// {
// 	int sum = 0,val = 50;
// 	while (val <= 100)
// 	{
// 		sum = sum + val;
// 		++ val;
// 	}
// 	cout << "the sum of 50 to 100 inclusive is " << sum << endl;
// 	return 0;
// }

//test 1.10
// int main(int argc, char const *argv[])
// {
// 	int val = 10;
// 	cout <<  "the number 10 to 0 :" << endl;
// 	while ( val >= 0)
// 	{
// 		cout << "val :" << val -- << endl;
// 	}
// 	return 0;
// }

//test 1.11

// int main(int argc, char const *argv[])
// {
// 	cout << "please enter  then startNmber and the endNumber: " << endl;
// 	int startNmber = 0 ,endNumber = 0 ;
// 	cin >> startNmber >> endNumber;
// 	cout << " the " << startNmber << " to " << endNumber <<"numbers  is :" << endl; 
// 	if (startNmber >= endNumber ){
// 		while (endNumber <= startNmber)
// 		{
// 			cout << "val : " << startNmber -- << endl;
// 		}

// 	}
// 	else{
// 		while(startNmber <= endNumber)
// 		{
// 			cout << "val : " << startNmber ++ << endl;
// 		}

// 	}
// 	return 0;
// }

//test 1.12
// int main(int argc, char const *argv[])
// {
// 	int sum = 0;
// 	for (int i = -100 ;i <= 100 ;i ++)//c++中,for循环头里是用分号隔开的 而且 <=之间不能有空格
// 		sum += i;
// 	cout << "the sum -100 to 100 inclusive is " << sum << endl;
// 	return 0;
// }

//test 1.13
//1)
// int main(int argc, char const *argv[])
// {
// 	int sum = 0;
// 	for (int i = 50;i <= 100; i++)
// 		sum += i;
// 	cout << " the sum 50 to 100 inclusive is " << sum << endl;
// 	return 0;
// }

//2)
// int main(int argc, char const *argv[])
// {
// 	cout << "the 10 to 0 number is :" << endl;
// 	for (int i = 10; i >= 0 ; i --)
// 		cout << "num : " << i << endl;
// 	return 0;
// }

//3)
// int main(int argc, char const *argv[])
// {
// 	cout << "please enter the startNumber and endNmber: " << endl;
// 	int startNumber = 0, endNumber = 0;
// 	cin >> startNumber >> endNumber;//注意两个输入文件之间没有逗号隔开
// 	cout << "the " << startNumber << " to "  << endNumber  << " is : "<< endl;
// 	if (startNumber >= endNumber){
// 		for (int i = startNumber; i >= endNumber ; i --)
// 			cout << "varl : " << i << endl;
// 	}
// 	else{
// 		for(int i = startNumber; i <= endNumber ; i ++)
// 			cout << "varl : " << i << endl;
// 	}

// 	return 0;
// }

//test 1.17-1.18
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int currVal = 0 , val = 0;
// 	if (cin >> currVal){
// 		int cnt = 1;
// 		while(cin >> val){
// 			if (val == currVal){
// 				cnt ++;
// 			}
// 			else{
// 				cout << currVal << " occours " << cnt << " times ;" << endl;
// 				currVal = val;
// 				cnt = 1;
// 			}
// 		}
// 		cout << currVal << " occours " << cnt << " times! " << endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	cout << "please enter two numbers:";
// 	int val1 , val2;
// 	cin >> val1 >> val2;
// 	if (val1 > val2){
// 		while(val1 >= val2){
// 			cout << val1 -- << " ,"; 
// 		}
// 	}
// 	else{
// 		while(val1 <= val2){
// 			cout << val1 ++ << ", ";
// 		}	

// 	}
	
// 	return 0;
// }

//文件重定向
// #include <iostream>
// #include <ostream> 
// #include <fstream>   
// using namespace std;
// int main()
// { 
// 	ifstream fin("input.txt");  // 已有输入文件
// 	ofstream fout("output.txt");  //输出文件
// 	streambuf *cinbackup;  //这个对象是用来备份原来的输入流
// 	streambuf *coutbackup; //这个对象是用来备份原来的输出流
// 	coutbackup= cout.rdbuf(fout.rdbuf());  //使用 rdbuf() 重新定向
// 	cinbackup= cin.rdbuf(fin.rdbuf());  //使用 rdbuf() 重新定向
// 	cout<<"Hello world"<<endl;   //去文件也
// 	char line[100];  
// 	cin>>line;  //从input.txt文件读入
// 	cout<<line<<endl;  //写入 output.txt
// 	// restore standard streambuf   
// 	cin.rdbuf(cinbackup);  // 取消，恢复键盘输入
// 	cout.rdbuf(coutbackup);  //取消，恢复屏幕输出
// 	return 0;
// } 

//输出错误
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	cerr << "No data?!" << endl;
	return -1;
}