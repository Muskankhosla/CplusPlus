#include <iostream>
using namespace std;
class Greatest
{   int a,b,c;

  public:
 void get(int m,int n,int o)
 {
    a=m;
    b=n;
    c=o;
 }
  
    int great(int a,int b,int c)
    {
        if(a>b&&a>c)
        {
            return a;
        }
        else if(b>a&&b>c)
        {
            return b;
        }
        else
        return c;
        
    }
    void disp()
    {
        cout<<great(a,b,c);
    }
    
};
int main()
{
    Greatest ob;
    ob.get(20,15,18);
    ob.disp();
   
   return 0;
}
