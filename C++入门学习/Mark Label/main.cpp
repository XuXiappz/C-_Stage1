#include <iostream>
using namespace std;
int main()
{
 int count = 0;
 label:
 cout<<count++<<" ";
 if (count<=100)
 goto label;
 cout<<endl;
 return 0;
}
