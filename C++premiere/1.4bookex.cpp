#include <iostream>
using namespace std;

//1.4.1
// int main(int argc, char const *argv[])
// {
// 	int sum = 0, val = 1;
// 	while (val <= 10)
// 	{
// 		sum = sum +val;
// 		++ val;
// 	}

// 	cout << "the sum of 1 to 10 inclusive is" << sum << endl;
// 	return 0;
// }

//1.4.2
// int main(int argc, char const *argv[])
// {
// 	int sum = 0;
// 	for(int i =1 ;i <= 10 ; i++)
// 	 	sum += i;
// 	 cout << "the sum of 1 to 10 inclusive is " << sum << endl;
// 	return 0;
// }

//1.4.3
// int main(int argc, char const *argv[])
// {
// 	int sum = 0 , val = 0;
// 	while (cin >> val)
// 		sum += val;
// 	cout << "the sum is : " << sum << endl;
// 	return 0;
// }

//1.4.4
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int currVal = 0 , val = 0;
	if (cin >> currVal){
		int cnt = 1;
		while(cin >> val){
			if (val == currVal){
				cnt ++;
			}
			else{
				cout << currVal << " occours " << cnt << " times ;" << endl;
				currVal = val;
				cnt = 1;
			}
		}
		cout << currVal << " occours " << cnt << " times! " << endl;
	}
	return 0;
}
