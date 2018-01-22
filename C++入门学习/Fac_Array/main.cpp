#include <iostream>
#include<iomanip>//流操作符
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
        cout<<setw(8)<<Fabi[i]<<" ";//setw(int n)用来控制输出间隔;

        /*使用setw(n)设置输出宽度时，默认为右对齐。
        若想让它左对齐的话，只需要插入 std::left，
        同理，右对齐只要插入 std::right，不过右对齐是默认状态，不必显式声明。*/
        if ((i+1)%4 == 0)
        cout<<endl;
    }
    cout <<endl;
    return 0;
}
