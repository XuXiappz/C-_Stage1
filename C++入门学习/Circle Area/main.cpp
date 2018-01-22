#include <iostream>
using namespace std;
int main()
{
    double radius=0;
    cout<<"请输入一个圆的半径："<<endl;
    cin>>radius;
    double area = 3.14*radius*radius;
    double girth = 3.14*2*radius;
    cout<<"圆的面积是："<<area<<endl;
    cout<<"圆的周长是："<<girth<<endl;
    return 0;
}
