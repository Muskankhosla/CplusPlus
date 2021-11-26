#include <iostream>
using namespace std;
class Date
{
    int d,y,m;
    public:
    void get()
    {
        cin>>d>>m>>y;
        
    }
    void disp()
    {
        cout<<d<<":"<<m<<":"<<y;
    }
};
int main()
{
   Date ob;
   ob.get();
   ob.disp();
   
   return 0;
}
