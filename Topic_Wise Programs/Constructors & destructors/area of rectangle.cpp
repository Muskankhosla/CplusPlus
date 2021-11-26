#include <iostream>
#include<string>
using namespace std;
class area{
     int l,b;
     public:
     area(int ,int);
     void disp();
     int cal();
     
};
     area::area(int x,int y)
     {
         l=x;
         b=y;
     }
     void area::disp()
     {
         cout<<"Area: "<<cal();
     }
     int area::cal()
     {
         int a;
          a=l*b;
          return a;
     }
 int main()
{
 area ob(12,3);
 ob.disp();
   return 0;
}
