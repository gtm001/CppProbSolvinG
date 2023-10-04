/* Take input as current balance,deposit balance and withdraw balance and get 
account detail with the current balance status as output. */
#include<iostream>
#include<string>
using namespace std;
struct money
{
    char name[50];
    int acnum;
};
union acmoney
{
    struct money info;
};

int deposit(long cb,long db)
{
    long current,deposit;
    current = cb;
    deposit = db;
    current=current+deposit;
    cout<<"deposit sussessfull!"<<endl;
    return current;
}

int withdraw(long cb,long wb)
{
    long current,wdraw;
    current=cb;
    wdraw=wb;
    if(current>wdraw)
    {
        current=current-wdraw;
        cout<<"withdraw sussessfull!"<<endl;
    }
    else{
        cout<<"insufficient amount!"<<endl;
    }
    return current;
}

int main()
{
    union acmoney abc;
    cin>>abc.info.name;
    cin>>abc.info.acnum;

    long currentbal,depositbal,draw,d,e;
    cin>>currentbal;
    cin>>depositbal;
    cin>>draw;

    d=deposit(currentbal,depositbal);
    e=withdraw(d,draw);

    cout<<"Balance: "<<e<<endl;
    cout<<"Account info: "<<endl;
    cout<<abc.info.name<<endl;
    cout<<abc.info.acnum<<endl;
}
