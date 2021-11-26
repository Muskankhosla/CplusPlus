#include <iostream>
#include<string>
using namespace std;
class student{
    public:
    int rollno;
string name;

};

int main()
{
   student s;
   s.name="john";
   s.rollno=12;
   cout<<s.name;
   cout<<"\n"<<s.rollno;
   return 0;
}
