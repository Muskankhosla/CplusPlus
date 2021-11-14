#define row 50
#define col 50
#include<iostream>
using namespace std;
void data_entry_matrix(int c, int r=3)
{
int matrix[row][col];
for(int i=0;i < r;i++)
{
for(int j=0;j < c;j++)
{
cin>>matrix[i][j];
}
}

cout<<"\n";
for(int i=0;i < r;i++)
{
for(int j=0;j < c;j++)
{
cout << matrix[i][j];
}
cout << endl;
}

}
int main()
{
int cols;
cin>>cols;
data_entry_matrix(cols);

return 0;
}



3
12 3 4 5 6 7 8 9

123
456
789
