#include <iostream>
#include<iomanip>//��������
using namespace std;
int main()
{
    int Fabi[20]={1,1};
    int i ;
    for (i=2;i<20;i++)
    {
        Fabi[i]=Fabi[i-1]+Fabi[i-2];

    }
    for (i=0;i<20;i++)
    {
        cout.setf(ios::left);
        cout<<setw(8)<<Fabi[i]<<" ";//setw(int n)��������������;

        /*ʹ��setw(n)����������ʱ��Ĭ��Ϊ�Ҷ��롣
        �������������Ļ���ֻ��Ҫ���� std::left��
        ͬ���Ҷ���ֻҪ���� std::right�������Ҷ�����Ĭ��״̬��������ʽ������*/
        if ((i+1)%4 == 0)
        cout<<endl;
    }
    cout <<endl;
    return 0;
}
