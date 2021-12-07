
#include <iostream>
using namespace std;
class fibonacci
{
    int f,f1,fib;
    public:
    fibonacci();
    void increament();
    void disp();

};
fibonacci::fibonacci()
{
    f=0;
    f1=1;
    fib=f+f1;
}
void fibonacci::increament()
{
    f=f1;
    f1=fib;
    fib=f+f1;
}
void fibonacci::disp()
{
    cout<<fib<<" ";
}
int main()
{   fibonacci ob;
       for(int i=0;i<=15;i++)
       {
           ob.disp();
           ob.increament();
       }

   
    

    return 0;
}
