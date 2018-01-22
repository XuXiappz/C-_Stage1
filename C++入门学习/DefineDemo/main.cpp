#define PI 3.14159
#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"请输入圆的半径：";
    cin>>r;
    cout<<"\n圆的周长为：";
    cout<<2*PI*r<<endl
    cout<<"\n圆的面积为：";
    cout<<PI*r*r<<endl;
    return 0;
}
