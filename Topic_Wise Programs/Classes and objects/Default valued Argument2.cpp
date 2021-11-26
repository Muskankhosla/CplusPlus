#include <iostream>
#include<string>
using namespace std;
float money(float money,float factor=1.2)
{
    return money*factor;
}

int main()
{float money1=100;
cout<<"Normal Person :"<<money(money1);
cout<<"\nVIP : "<<money(money1,1.5);
   
   return 0;
}
