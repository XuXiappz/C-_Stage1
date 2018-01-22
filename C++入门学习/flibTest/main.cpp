#include<iostream>
using namespace std;
double flibFunc(int n)
{
    double result;
    if (n == 0)
    result = 0;
    else if(n ==1 || n ==2)
    result = 1;
    else
    {
        result = flibFunc(n-1)+flibFunc(n-2);
    }
    return result;

}

int main()
{
   int n ;
   cout<<"please a flib number:"<<endl;
   cin >>n;
   cout<<"flib("<<n<<")="<<flibFunc(n)<<endl;
   return 0;
}
