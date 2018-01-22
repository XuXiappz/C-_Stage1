#include <iostream>
using namespace std;
void caIC(double x,double &y,double &z)
{
    double pi = 3.14;
    y = 2*pi*x;
    z = pi*x*x;
}
int main()
{
    double r,c,s;
    cout<<"请输入圆的半径r:"<<endl;
    cin>>r;
    caIC(r,c,s);
    cout<<"圆的面积是："<<s<<"周长为："<<s<<endl;
    return 0;
}
