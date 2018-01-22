#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

//test3.31
// int main(int argc, char const *argv[])
// {
// 	const int sz = 10;
// 	int array[sz];
// 	for (int  i = 0; i <sz ; i++)
// 	{
// 		array[i] = i;
// 		cout << "array[" << i << "] = " << array[i] << endl;
// 	}
// 	return 0;
// }

//test3.32
// int main(int argc, char const *argv[])
// {
// 	const int sz = 10;
// 	int array[sz];
// 	int array2[sz];	
// 	for (int i = 0; i < sz ;i++)
// 	{
// 		array[i] = i;
// 	}
// 	for (int i = 0;i < sz ; i++)
// 	{
// 		array2[i] = array[i];
// 		cout << "array2[" << i << "] = " << array2[i] << endl;
// 	}
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	vector<int> v;
// 	vector<int> v2;
// 	for (int i = 0 ;i <10 ;i ++)
// 		v.push_back(i);
// 	for (decltype(v.size()) index = 0 ; index != 10 ; index ++)
// 		v2.push_back(v[index]);
// 	for(auto item : v)
// 	 	cout << item << endl;
// 	for (auto item :v2)
// 		cout << item << endl;	

// 	return 0;
// }

//test3.35
// int main(int argc, char const *argv[])
// {
// 	const int sz = 10;
// 	int array[sz];
// 	int *pbeg = begin(array);
// 	int *pend = end(array);
// 	while(pbeg != pend)
// 	{
// 		*pbeg = 0;
// 		 pbeg++;
// 	}

// 	for(auto item : array)
// 		cout << item << endl;
// 	return 0;
// }

//test3.36
// int main(int argc, char const *argv[])
// {
// 	const int sz = 10;
// 	int array[sz];
// 	int array2[sz];
// 	if (array == array2)
// 		cout << "array is equle to array2"<< endl;
// 	else
// 		cout << "array isn't equle to array2" << endl;
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	vector<int> v;
// 	vector<int> v2;
// 	if (v == v2)
// 		cout << "v is equile to v2" << endl;
// 	else
// 		cout << "v isn't equle to v2" <<endl;
// 	return 0;
// }

//test3.37
// int main(int argc, char const *argv[])
// {
// 	const char cs[] = {'h','e','l','l','o'};
// 	const char *cp = cs;
// 	while(*cp)
// 	{
// 		cout << *cp << endl;
// 		++cp;
// 	}
// 	return 0;
// }


//test3.39
// int main(int argc, char const *argv[])
// {
// 	string s1 = "hello a";
// 	string s2 = "hello b";
// 	char c1[] = "hello a";
// 	char c2[] = "hello b";
// 	cout << "two strings compare" << endl;
// 	if(s1 > s2)
// 		cout << "s1 > s2" << endl;
// 	else
// 		cout << "s1 < s2" << endl; 
// 	cout << "two cstring compare" << endl;
// 	if(strcmp(c1,c2)>0)
// 		cout<< "c1 > c2" << endl;
// 	else
// 		cout<< "c1 < c2" << endl;
// 	return 0;
// }

//test3.40
// int main(int argc, char const *argv[])
// {
// 	char *cs = "welcom to ";
// 	char *cs2 = "C++ family!";
// 	cout << cs << endl;
// 	cout << cs2 << endl;
// 	cout << strlen(cs) << strlen(cs2) << endl;
// 	// char unioncs[strlen(cs)+strlen(cs2)-1];
// 	// strcpy(unioncs,cs);
// 	// strcat(unioncs,cs2);
// 	// cout << unioncs << endl;
// 	return 0;
// }

//test3.41
// int main(int argc, char const *argv[])
// {
// 	const int sz = 10;
// 	int array[sz];
// 	for (int i = 0; i<sz ; i++)
// 		array[i] = i;
// 	vector <int> v(begin(array),end(array));
// 	vector <int> v2(array+1,array+5);
// 	cout << "v:  " << endl << endl;
// 	for(auto item :v)
// 	{
// 		cout<< item << endl;
// 	}
// 	cout <<endl << "v2:  " <<endl << endl ;
// 	for(auto item :v2)
// 	{
// 		cout<< item << endl;
// 	}
// 	return 0;
// }

//test 3.42
// int main(int argc, char const *argv[])
// {
// 	const int sz = 10;
// 	vector<int>v(sz,6);
// 	int array[sz];
// 	for (int i = 0;i<sz;i++)
// 		array[i] = v[i];
// 	cout << "the array is :" <<endl << endl;
// 	for (auto item :array)
// 		cout << item << endl;
// 	return 0;
// }



