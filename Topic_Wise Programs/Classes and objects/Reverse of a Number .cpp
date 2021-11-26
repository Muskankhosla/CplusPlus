#include <iostream>
using namespace std;
class Reverse
{
    int n;
        public:
        void getNum();
         void disp();
         int rev();
};
       void Reverse::getNum()
       {
           cout<<"Enter the num:";
           cin>>n;
       }
       void Reverse::disp()
       {
           cout<<"Reverse Num:"<<rev();
       }
       int Reverse::rev()
       { int x=0,r=0;
           while(n!=0)
           {
              x=n%10;
              n=n/10;
              r=r*10+x;
           }
           return r;
       }
 
int main()
{
    Reverse ob;
    ob.getNum();
    ob.disp();
   
   retur
