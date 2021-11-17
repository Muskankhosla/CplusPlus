
#include <iostream>
using namespace std;
int main()
{ int a,b,c;
cout<<"Enter 3 numbers:";
cin>>a>>b>>c;
if(a>b&&a>c)
 cout<<a;
else if(b>c &&b>a)
cout<<b;
else
cout<<c;
    return 0;
}

Enter 3 numbers:21 34 11
34
