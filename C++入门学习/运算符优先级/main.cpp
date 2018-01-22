#include<iostream>
using namespace std;
int main()
{
    int a=1,b=2,m=3,n=4,x,y;
    x = -m ++;//x=-3,m = 4
        cout<<"x =" <<x<<endl;
    cout<<"m = "<<m<<endl;
    x = x+8/++n;//x=-3+1=-2
    y = (n=b>a)||(m=a<b);
    cout<<"m = "<<m<<endl;
    cout<<"n =" <<n<<endl;
    cout<<"x =" <<x<<endl;
    cout<<"y =" <<y<<endl;
    return 0;
}
