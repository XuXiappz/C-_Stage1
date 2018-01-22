#include <iostream>
#include <string>
using namespace std;

//3.4
// int main(int argc, char const *argv[])
// {
// 	string s1,s2;
// 	cin >> s1 >> s2;
// 	// if (s1 != s2){
// 	if (s1.size() == s2.size()){
// 		if (s1 > s2){
// 			cout << s1 << endl;
// 		}else{
// 			cout << s2 << endl;
// 		}
// 	}
// 	return 0;
// }

//3.5
// int main(int argc, char const *argv[])
// {
// 	string world,txt;
// 	while(cin >> world)
// 	{
// 		// txt += world ; 
// 		world += " ";
// 		txt += world ;
// 	}
// 	cout << txt << endl;
// 	return 0;
// }

//3.6
// int main(int argc, char const *argv[])
// {
// 	string str = "1234556778";
// 	cout << "the starStr: " << str << endl;
// 	for(auto &c:str)
// 		c = 'X';
// 	cout <<"the endStr: " << str << endl;
// 	return 0;
// }

// 3.7
// int main(int argc, char const *argv[])
// {
// 	string str = "1234556778";//"1234556778"
// 	cout << "the starStr: " << str << endl;
// 	for(char &c:str)
// 		c = 'X';
// 	cout <<"the endStr: " << str << endl;//"XXXXXXXXXX"
// 	return 0;
// }

//3.8
// int main(int argc, char const *argv[])
// {
// 	string str("123456789");
// 	cout << "the startStr: " << str << endl;
// 	string::size_type index = 0;
// 	while(index < str.size() )
// 	{
// 		auto &c = str[index++];
// 		c = 'X';
// 	}
// 	cout << "the endStr: " << str << endl;
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	string str("123456789");
// 	cout << "the startStr" << str << endl;
// 	for(string::size_type index = 0; index <str.size(); index++)
// 	{
// 		auto &c = str[index];
// 	    c = 'X';
// 	}
// 	cout << "the endStr: " << str << endl;
// 	return 0;
// }

//3.9
// int main(int argc, char const *argv[])
// {
// 	string s;
// 	cout << s[0] << endl;
// 	return 0;
// }

//3.10
// int main(int argc, char const *argv[])
// {
// 	string s,result;
// 	cout <<"please enter a str" << endl;
// 	getline(cin,s);
// 	for (auto &c :s)
// 		if (!ispunct(c))
// 		result +=c;
// 	cout << "the pure str is : " << result << endl;
// 	return 0;
// }

//3.11
int main(int argc, char const *argv[])
{
	 const string s = "keep out!";
	 for (auto &c :s)
	 	c = "1";
	 cout << "the endStr is: " << s << endl;//会报错,这里的c是绑定到了常量引用中
	return 0;
}