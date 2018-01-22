#include<iostream>
using namespace std;
int main()
{
    int count1 = 0;
    double num = 0.0,sum = 0.0,product = 1.0;
    cout<<"请输入一些数，以0结束：";
    cin>>num;
    while (num!=0){
        sum = sum +num;
        product = product*num;
        count1 = count1+1;
        cin>>num;
    }
    if (count1 >=1)
    {
        cout<<"运算结果如下："<<endl;
        cout<<"总共输入数字"<<'\t'<<count1<<"个"<<endl;
        cout<<"他们的和为sum:"<<'\t'<<sum<<endl;
        cout<<"他们的积为product:"<<'\t'<<product<<endl;
    }
    else
    {
        cout<<"没有输入有效数字";
    }
    return 0;
}
