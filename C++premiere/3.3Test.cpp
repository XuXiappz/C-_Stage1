
#include <iostream>
#include <string>
#include <vector>
using namespace std;


// int main(int argc, char const *argv[])
// {
	
// 	int number;
// 	vector<int> v;
// 	while (cin >> number)
// 		v.push_back(number);
// 	for (auto k :v)
// 		cout << v << endl;
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	string s;
// 	vector<string> v;
// 	while(getline(cin,s))
// 		v.push_back(s);
// 	for(auto k:v)
// 		cout << k << endl;
// 	return 0;
// }

//test3.16
// int main(int argc, char const *argv[])
// {
// 	// vector <int>v1;
// 	// vector <int>v1(10);
// 	// vector <int>v1(10,42);
// 	vector <int>v1{10};//有报错
// 	// vector <int> v1{10,20};//有报错
// 	// vector <string> v1{10};//有报错
// 	// vector <string> v1{10,"hi"};//有报错
// 	cout << "start" << endl;
// 	for(auto v :v1)
// 		cout << v << endl;
// 	cout << "end" << endl;
// 	return 0;
// }


//test3.17
// int main(int argc, char const *argv[])
// {
// 	string world;
// 	vector<string>worlds;
// 	while(cin >> world)
// 		worlds.push_back(world);
// 	for(auto &w :worlds)
// 	{
// 		for (auto &l :w)
// 			l = toupper(l);
// 		cout << "the endworld :" << w <<endl;
// 	}

// 	return 0;
// }

//test3.18
// int main(int argc, char const *argv[])
// {
// 	vector<int> ivec;
// 	ivec.push_back(42);
// 	cout <<"the first elemnet is " << ivec[0] << endl; 
// 	return 0;
// }

//test3.19

// int main(int argc, char const *argv[])
// {
// 	//way1
// 	// vector<int> v (10,42);
// 	//way2
// 	// vector<int> v{42,42,42,42,42,42,42,42,42};//会报错
// 	//way3
// 	vector<int> v;
// 	for (vector<int>::size_type i = 0 ;i < 10;i++)
// 		v.push_back(42);
// 	for(auto e :v)
// 		cout << "the element is " << e <<endl;
// 	return 0;
// }

//test3.20
int main(int argc, char const *argv[])
{
	vector<int> v;
	int number;
	while(cin >> number)
		v.push_back(number);
	for(vector<int>::size_type i = 0;i < v.size()-1; i++)
		// cout <<"the sum of " << i << " and " << i+1 << " is: "<< v[i] + v[i+1] << endl;
		cout <<"the sum of " << i+1 << " and " << v.size()-i << " is: "<< v[i] + v[v.size()-i-1] << endl;
	return 0;
}