#include <iostream>
#include<string>
using namespace std;
class volume{
    
    public:
    int s,vol;
     volume();
     void get();
     void disp();
     
};
volume::volume()
{ 
   vol=0;
}
void volume::get()
{
    cin>>s;
    
}
void volume::disp()
{  vol=s*s*s;
    cout<<vol<<endl;
}
    int main()
{
   
 volume ob;
   ob.get();
   ob.disp();
   return 0;
}
