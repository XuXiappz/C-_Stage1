#include <iostream>
using namespace std;
int main()
{
    int stu[3][3];
    for (int i=0;i<3;i++)
    {
        cout<<"��"<<i+1<<"��ѧ��"<<endl;
        for(int j=0;j<3;j++)
        {
            cout<<"�������"<<j+1<<"λѧ���ĳɼ�"<<endl;
            cin>>stu[i][j];
            cout<<endl;
        }
    }
    for (int i=0;i<3;i++)
    {
        double ave=0.0;
        double sum =0.0;
        for(int j=0;j<3;j++)
        {
           sum+=stu[i][j];
        }
        ave = sum/3.0;
        cout<<"��"<<i+1<<"��ѧ�Ƶ�ƽ����Ϊ��"<<ave<<endl;

    }
    return 0;
}
