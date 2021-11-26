#include <iostream>
#include<string>
using namespace std;
class Square{
   int a;
   float b;
   public:
  inline void Squa(int a,float b)
   { int x;
   float y;
       x=a*a;
       y=b*b;
       cout<<x<<" " <<y;
   }
};

int main()
{
  Square ob;
  ob.Squa(2,3.5);
       
   
   return 0;
}
