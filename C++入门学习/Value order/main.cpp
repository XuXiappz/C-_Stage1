#include <iostream>
using namespace std;
int main()
{
    double a,b,item;
    cout<<"����������������a,b:";
    cin>>a>>b;
    if (b>a)
    {
        item = a;
        a = b;
        b = item;
    }

    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}
