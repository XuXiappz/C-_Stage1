#include<iostream>
using namespace std;
int main()
{

    int a=123,b=3,c=2,d=456,x=2;
    c+=a;
    d%=b;
    x+=x-=x*x;
    cout<<"  c= "<<c<<"  d= "<<d<<"  b= "<<b<<"  x= "<<x<<endl;
    return 0;
}
