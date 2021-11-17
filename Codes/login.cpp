
#include <iostream>
#include<string.h>
using namespace std;
int main()
{  char u[100]="mk@gmail.com";
  char pass[20]="12345";
  char u1[100],pass2[20];
  cin>>u1>>pass2;
  if(strcmp(u,u1)==0&&strcmp(pass,pass2)==0)
  {
      cout<<"Login successful";
  }
  else
  cout<<"Invalid data entered";

    return 0;
}
mk@gmail.com
12345
Login successfull
