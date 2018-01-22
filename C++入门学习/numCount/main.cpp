#include<iostream>
using namespace std;
int main()
{
    int num,count1=0,count2=0;
    double sum = 0.0,ave =0.0;
    cout<<"请输入若干个正整数，以0结束输入：\n";
    cin>>num;//输入一个数之后，回车读入下一个数，输入0之后停止输入流
    while(num!=0)
    {
        sum = sum+num;
        if(num>0)
        count1++;
        else
        count1++;
        cin>>num;//这句话就是输入流的循环
    }
    if ((count1+count2)!=0)
    {

        ave= sum/(count1+count2);
        cout<<"和为:"<<sum<<'\t'<<"平均值为："<<ave;
        cout<<"\n正整数有："<<count1<<'\t'<<"\n负整数有："<<count2;
    }
    else


        cout<<"没有输入有效数！";
        return  0;

}
