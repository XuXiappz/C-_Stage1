#include<iostream>
using namespace std;
int main()
{
    int num,count1=0,count2=0;
    double sum = 0.0,ave =0.0;
    cout<<"���������ɸ�����������0�������룺\n";
    cin>>num;//����һ����֮�󣬻س�������һ����������0֮��ֹͣ������
    while(num!=0)
    {
        sum = sum+num;
        if(num>0)
        count1++;
        else
        count1++;
        cin>>num;//��仰������������ѭ��
    }
    if ((count1+count2)!=0)
    {

        ave= sum/(count1+count2);
        cout<<"��Ϊ:"<<sum<<'\t'<<"ƽ��ֵΪ��"<<ave;
        cout<<"\n�������У�"<<count1<<'\t'<<"\n�������У�"<<count2;
    }
    else


        cout<<"û��������Ч����";
        return  0;

}
