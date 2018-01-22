#include<iostream>
using namespace std;

int fun(int n)
{
    int z;
    if(n>1)
    z = fun(n-1)*n;
    else
    z =1;
    return z;

}
int main()
{
    int n;
    cout<<"please enter a number:"<<endl;
    cin>>n;
    cout<<"the result is:"<<fun(n)<<endl;
    return 0;
}
