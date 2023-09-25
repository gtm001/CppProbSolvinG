//  BINARY TO DECIMAL CONVERSION! 

// method:1 (using loop)

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,a,b,sum=0,power=0;
    cin>>num;
    while(num!=0)
    {
        a=num%10;
        b=pow(2,power)*a;
        sum=sum+b;
        power=power+1;
        num=num/10;
    }

    cout<<sum;
}

// METHOD-2 ( with array concept )

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,sum=0;
    cin>>n;
    int arr[n];
    int power=n-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  
    for(int i=n-1;i>=0;i--)
    {
        a=pow(2,power)*arr[i];
        sum=sum+a;
        power++;
        
    }
    cout<<sum;
}

/* in case of array if we reverse the loop then the power will initialize with 0 (Gennerally),
 if loop will start straight then the power will start with (SIZEofArray-1).*/
