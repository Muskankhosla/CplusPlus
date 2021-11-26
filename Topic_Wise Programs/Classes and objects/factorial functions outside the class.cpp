#include <iostream>
using namespace std;
class Fact
{
   int n;
   public:
   void get()
   {  cout<<"Enter the Num:\n";
       cin>>n;
    }
    void factorial();

};
void Fact::factorial()
{     int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"factorial:"<<f;
}
int main()
{
   Fact ob1;
   ob1.get();
   ob1.factorial();
  
}
