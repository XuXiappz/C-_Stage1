#include <iostream>
using namespace std;
int main()
{
    double temp,x,y,z ;
    cout<<"������3������"<<endl;
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
    cout<<"�����3��������С����˳���ǣ�"<<endl;
    cout<<x<<"<"<<y<<"<"<<z<<endl;
    return 0;

}
