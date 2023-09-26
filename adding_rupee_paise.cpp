//Take two input as Rupee and Paise and then calulate the total amount i.e output.

#include<iostream>
using namespace std;
class money
{
    public:
    int rupee1;
    int rupee2;
    int paise1;
    int paise2;

    money(int r1,int p1 ,int r2,int p2)
    {
        this->rupee1=r1;
        this->rupee2=r2;
        this->paise1=p1;
        this->paise2=p2;

    }
    void PrintAmount()
    {
        double a,b;
        a=rupee1+(static_cast<double>(paise1) / 100); //convertion of paise into float;
        b=rupee2+(paise2/100.0); // or directly convert int into float by dividing 100.0;
        cout<<"the money is "<<a+b;
    }
};
int main()
{
    int n,o,p,q;
    cin>>n;
    cin>>o;
    cin>>p;
    cin>>q;
    money amount(n,o,p,q);
    amount.PrintAmount();

}
