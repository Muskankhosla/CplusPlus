
#include <iostream>
using namespace std;
int main()
{ int a,b;
cout<<"Before swap :";
cin>>a>>b;
 b=a+b-(a=b);
 cout<<"after swap: "<<a<<" "<<b;
    return 0;
}

Before swap : 1 2 
after swap: 2 1
