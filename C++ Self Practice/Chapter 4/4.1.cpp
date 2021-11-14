
#include <iostream>
#include<cmath>
using namespace std;
 void matrix(int m, int n)
 {   int a[10][10];
     
 }
int main()
{ int m,n,a[10][10];
cin>>m>>n;
 for(int i=1;i<=m;i++)
     {
         for(int j=1;j<=n;j++)
         {
             cin>>a[i][j];
         }
      }
      for(int i=1;i<=m;i++)
     {
         for(int j=1;j<=n;j++)
         {
             cout<<a[i][j];
         }
         cout<<"\n";
     }

  
    return 0;
}


3 3 
1 2 3 4 5 6 7 8 9
123
456
789
