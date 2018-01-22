#include <iostream>
using namespace std;
int main()
{
    int sum =0,num;
    cout<<"请输入整数："<<endl;
    cin>>num;
    while (num!= 0){
    sum +=num;
    cin>>num;
    }
    cout<<"\n和为："<<sum<<endl;
    return 0;
}
