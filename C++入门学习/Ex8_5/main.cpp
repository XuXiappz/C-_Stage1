#include <iostream>
using namespace std;
double powerP(int n,int k)
{
    double result=n;
    for(int i =1;i<=k;i++)
    {
        result *= n;
    }
    return result;
}

double sumP(int k,int n)
{
    double sum =0.0;
    for (int i =1;i<n;i++)
    {
        sum = sum +powerP(i,k);
    }
    return sum;
}
int main()
{
    int n ,k;
    double result;
   cout<<" please Enter n,k:";
   cin>>n,k;
   result = sumP(n,k);
   cout<<"the result is:"<<result;
    return 0;
}
