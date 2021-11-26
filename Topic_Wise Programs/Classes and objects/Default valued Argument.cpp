#include <iostream>
#include<string>
using namespace std;
int sum(int a,int b=10,int c=25)
{
    return a+b+c;
}

int main()
{ cout<<sum(2)<<endl;
  cout<<sum(12,10)<<endl;
  cout<<sum(18,15,39);
   
   return 0;
}
