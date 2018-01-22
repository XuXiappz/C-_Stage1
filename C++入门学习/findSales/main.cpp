#include <iostream>
#define css 25000
#define INITAL_SALES 0.01
using namespace std;



int main()
{
    double salesAmount;
    double commission =0;
    do {
    salesAmount = salesAmount +0.01;
    if(salesAmount>10000.01)
    commission = 5000*0.08+5000*0.1+(salesAmount -10000)*0.12;
    else if (salesAmount>=5000.01)
    commission = 5000*0.08+(salesAmount-5000.0)*0.1;
    else
    commission = salesAmount*0.08;
    }while(commission<css);
    cout<<"为了一年挣"<<css+5000<<"元，你必须完成的销售额为："<<salesAmount<<"元"<<endl;
    return 0;
}
