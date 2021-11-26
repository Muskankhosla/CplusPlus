#include <iostream>
using namespace std;
class operate
{
    int x,y;
    public:
    int sum();
    int mul();
    void get()
    {
        cin>>x>>y;
    }
    void disp()
    {
        cout<<x<<" "<<y<<endl;
        cout<<sum()<<endl;
        cout<<mul()<<endl;
    }
};
int operate::sum()
{
    return(x+y);
}
int operate::mul()
{
    return(x*y);
}
int main()
{
   operate ob;
   ob.get();
   ob.disp();
   
   return 0;
}
