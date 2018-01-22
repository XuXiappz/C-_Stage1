#include <iostream>
using namespace std;
int main()
{
    int stu[3][3];
    for (int i=0;i<3;i++)
    {
        cout<<"第"<<i+1<<"门学科"<<endl;
        for(int j=0;j<3;j++)
        {
            cout<<"请输入第"<<j+1<<"位学生的成绩"<<endl;
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
        cout<<"第"<<i+1<<"门学科的平均分为："<<ave<<endl;

    }
    return 0;
}
