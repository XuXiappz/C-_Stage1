#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,count=0;
    double root;
    while(count<10){
    cout<<"������һ��������:\n";
    cin >> num;
    if (num<0){
    cout<<"������������һ����������"<<endl;
    continue;
    }
    root = sqrt(num);
    cout <<root<<endl;
    count++;
    }
    return 0;

}
