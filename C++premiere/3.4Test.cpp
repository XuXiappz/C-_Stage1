#include <iostream>
#include <vector>
#include <string>

using namespace std;

//test3.21
// int main(int argc, char const *argv[])
// {
// 	// vector<int> v1;
// 	// vector<int> v1(10);
// 	vector<int> v1(10,8);
// 	for (auto it = v1.begin();it != v1.end();++it)
// 		cout << *it << endl;
// 	return 0;
// }

//test3.22
// int main(int argc, char const *argv[])
// {
// 	vector<string> text;
// 	string s;
// 	while(getline(cin,s))
// 		text.push_back(s);
// 	for(auto s1 = text.begin();s1 != text.end() && !s1->empty(); s1++)
// 	{
// 		for (auto s2 = s1->begin(); s2 != s1->end(); s2++)
// 			*s2 = toupper(*s2); 
// 		cout << *s1 << endl;	
// 	}
// 	return 0;
// }

//test3.23
// int main(int argc, char const *argv[])
// {
// 	vector<int> numbers;
// 	for(int i = 1 ;i <=10 ; i++)
// 		numbers.push_back(i);
// 	for (auto it = numbers.begin(); it != numbers.end(); it ++)
// 	{
// 		cout << "the startNmubers: " << *it << endl;
// 		*it *=2;
// 		cout << "the endNumbers:" << *it << endl;
// 	}

// 	return 0;
// }

//test3.24
// int main(int argc, char const *argv[])
// {
// 	vector<int>numbers;
// 	int number;
// 	while(cin >> number)
// 		numbers.push_back(number);
// 	for (auto it = numbers.begin();it != numbers.end()-1;it++)
// 		cout << "the sum of v1 " << *it << "and v2 " << *(it+1) << " is :" << *it + *(it+1) << endl; 
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	vector<int> numbers;
// 	int number;
// 	while(cin >> number)
// 		numbers.push_back(number);
// 	int i = 1;
// 	for (auto it = numbers.begin(); it <= numbers.begin() + numbers.size()/2; it ++,i++)
// 	{
// 		cout << "the sum of v1 " << *it << " and v2 " << *(numbers.end()-i) << " is " << *it + *(numbers.end() - i) << endl;
// 	}
// 	return 0;
// }

//test3.25
int main(int argc, char const *argv[])
{
	vector <int> scores(11,0);
	int grade;
	while(cin >> grade)
	{
		auto it = scores.begin();
		cout <<*(it + grade/10) << endl; 
	    *(it + grade/10) = *(it + grade/10) +1;
	    cout <<*(it + grade/10) << endl; 
	}
	int i = 0;
	for(auto v :scores)
		cout << "the number of person in " << i++ * 10 << " gared is " << v << endl;
	return 0;
}

//test3.26