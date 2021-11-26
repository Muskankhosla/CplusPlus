#include <iostream>
using namespace std;
class circle{
   int radius;
   public:
   void getRad(){
       cout<<"Enter the radius :";
       cin>>radius;
   }
    int area()
    { int a;
     return  a=3.14*radius*radius;
    }
    void disp(){
        cout<<area();
    }
    
};
int main()
{
   circle ob1;
   ob1.getRad();
   ob1.disp();

    return 0;
}
