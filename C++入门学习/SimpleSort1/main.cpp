#include <iostream>
using namespace std;
int main()
{
    double temp,x,y,z ;
    cout<<"请输入3个数："<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    if (x>y){
    temp = x;
    y = x;
    x = temp;
    }
    if (x>z){
    temp =z;
    z = x;
    x = temp;
    }
    if (y>z){
     temp = z;
     z = y;
     y = temp;
    }
    cout<<"输入的3个数，由小变大的顺序是："<<endl;
    cout<<x<<"<"<<y<<"<"<<z<<endl;
    return 0;

}
