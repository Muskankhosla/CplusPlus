
#include <iostream>
using namespace std;
class date{
    int days,mnth,year;
    public:
    void get(int d,int m,int y)
    {
        days=d;
        mnth=m;
        year=y;
        
    }
    void disp()
    {
        cout<<days<<":"<<mnth<<":"<<year<<endl;
        
    }
};
int main()
{   date ob;
   ob.get(12,2,2021);
   ob.disp();
    

    return 0;
}
