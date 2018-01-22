#include <iostream>
using namespace std;
int main()
{
    int Array_A[2][3]={11,12,13,21,22,23};
    double Array_B[2][3] = {{11.01,12.01,13.01},{21.01,22.01,23.01}};
    cout <<"Array_A"<<endl;
    for(int i =0;i<2;i++)
    {
        for (int j= 0;j<3;j++)
        {
           cout<<Array_A[i][j]<<"  "<<endl;
        }
        cout<<endl;

    }
    cout <<"Array_B"<<endl;
    for(int i =0;i<2;i++)
    {
        for (int j= 0;j<3;j++)
        {
           cout<<Array_B[i][j]<<"  "<<endl;
        }
        cout<<endl;

    }

    return 0;
}
