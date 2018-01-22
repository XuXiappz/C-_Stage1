#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,count=0;
    double root;
    while(count<10){
    cout<<"请输入一个正整数:\n";
    cin >> num;
    if (num<0){
    cout<<"负数，请输入一个正整数："<<endl;
    continue;
    }
    root = sqrt(num);
    cout <<root<<endl;
    count++;
    }
    return 0;

}
