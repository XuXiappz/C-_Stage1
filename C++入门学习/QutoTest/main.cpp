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
    cout<<"������Բ�İ뾶r:"<<endl;
    cin>>r;
    caIC(r,c,s);
    cout<<"Բ������ǣ�"<<s<<"�ܳ�Ϊ��"<<s<<endl;
    return 0;
}
