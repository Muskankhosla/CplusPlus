#include <iostream>
#include<string>
using namespace std;
class count{
    int n;
    public:
    void get()
    {
        cin>>n;
    }
   void disp()
   {    
      }
};

int main()
{
   count a;
   int x;
   cin>>x;
   for(int i=1;i<=x;i++)
   { cout<<"Function called "<<i<<" times "<<endl;
      a.disp();
       
   }
   return 0;
}
