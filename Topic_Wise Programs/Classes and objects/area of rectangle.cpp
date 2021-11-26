#include <iostream>
#include<string>
using namespace std;
class Rectangle
{
   int a,b;
   public:
      void get()
     {
       cin>>a>>b;
     }
     void area();
  
};
inline void Rectangle::area()
{
    int ar;
    ar=a*b;
    cout<<"Area:"<<ar;
    
}

int main()
{
  Rectangle ob;
  ob.get();
  ob.area();
   
   return 0;
}
