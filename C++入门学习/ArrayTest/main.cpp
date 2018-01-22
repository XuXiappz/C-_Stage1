#include <iostream>
using namespace std;
int main()
{
    int array[6],i;
    for (i=0;i<6;i++)
    {
     array[i] = 7-i;
    }
    for(i=5;i>=0;i--)
    {
        cout<<"array["<<i<<"]:  "<<array[i]<<endl;
    }

    int v[2][3] ={{1,2,3},{3,4,5}};
    return 0;
}
