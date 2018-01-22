#include <iostream>
#include <string>
using namespace std;
//ex1
// int main(int argc, char const *argv[])
// {
// 	string s1,s2;
// 	cin >> s1 >> s2;
// 	cout << s1 << s2;
// 	return 0;
// }

//ex2
// int main(int argc, char const *argv[])
// {
// 	string world;
// 	while (cin >> world)
// 	{
// 		cout << world << endl;
// 	}
// 	return 0;
// }

//ex3
// int main(int argc, char const *argv[])
// {
// 	string line;
// 	while(getline(cin , line))
// 	{
// 		// if(! line.empty())
// 		if (line.size()>20)
// 		cout << line << endl;
// 	}
// 	return 0;
// }

//ex4
// int main(int argc, char const *argv[])
// {
// 	string str("Hello World!!!!");
// 	decltype(str.size()) punct_cnt = 0 ;
// 	for (auto c :str)
// 		if (ispunct(c) )
// 			++ punct_cnt;
// 	cout << punct_cnt << " punctuation characters in" << str << endl;
// 	return 0;
// }

//ex5

// int main(int argc, char const *argv[])
// {
// 	string str("Hello World");
// 	for (auto &c:str)
// 		c = toupper(c);
// 	cout << str << endl;
// 	return 0;
// }

//ex6
int main(int argc, char const *argv[])
{
	const string hexdigits = "0123456789ABCDEF";
	cout << "Enter a series fo numbers of between 0 and 15"
		 << "separated by space.Hit ENTER when finished:"
		 << endl;
	string result;
	string::size_type n;
	while(cin >> n)
		if (n < hexdigits.size())
			result += hexdigits[n];
			cout << "Your hex number is: " << result << endl;
	return 0;
}
