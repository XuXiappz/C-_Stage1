#include <iostream>
using namespace std;
int main()
{
    int firstNum,secondNum;
    firstNum = 2;
    secondNum = 43;
    double result = static_cast <double>(firstNum)/secondNum;
    cout<<result<<endl;
    return 0;
}
