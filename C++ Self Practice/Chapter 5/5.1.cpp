#include <iostream>
using namespace std;
class account{
    char name[20];
    int acc_Num,balance,deposit,withdrawn;
    char type[20];
    public:
    void input(void);
    void diposit();
    void withdraw();
    void display(void);
};
void account:: input(){
        cin>>name;
        cin>>type;
        cin>>acc_Num;
        cin>>balance;
}
void account::diposit()
{
    cin>>"Enter Money to be deposited:">>deposit;
    balance+=deposit;
    cout<<"balance money after deposit :"<<balance;
   
}
void account::withdraw()
{
    cin>>"Enter Money to be withdrawn:">>withdrawn;
    if(withdrawn>=balance)
    {
        cout<<"Insufficient Balance";
    }
    else{
    balance-=withdrawn;
    cout<<"balance money after withdraw :"<<balance;
    }
    
}
int main()
{   account a;
    a.input();
    a.diposit();
    a.withdraw();
   

    return 0;
}
