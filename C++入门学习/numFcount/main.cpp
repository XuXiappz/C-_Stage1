#include<iostream>
using namespace std;
int main()
{
    int count1 = 0;
    double num = 0.0,sum = 0.0,product = 1.0;
    cout<<"������һЩ������0������";
    cin>>num;
    while (num!=0){
        sum = sum +num;
        product = product*num;
        count1 = count1+1;
        cin>>num;
    }
    if (count1 >=1)
    {
        cout<<"���������£�"<<endl;
        cout<<"�ܹ���������"<<'\t'<<count1<<"��"<<endl;
        cout<<"���ǵĺ�Ϊsum:"<<'\t'<<sum<<endl;
        cout<<"���ǵĻ�Ϊproduct:"<<'\t'<<product<<endl;
    }
    else
    {
        cout<<"û��������Ч����";
    }
    return 0;
}
