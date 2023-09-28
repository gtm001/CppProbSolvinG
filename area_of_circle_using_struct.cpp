// Area and circumference of circle using struct upto two decimal places.
#include<iostream>
#include<iomanip>
using namespace std;
struct Circle
{
float radius;
};

int main()
{
    float r;
    cin>>r;
    struct Circle abc;
    abc.radius=r;
    cout << fixed << setprecision(2);
    cout<< "Area: "<<3.14*abc.radius*abc.radius<<endl;
    cout<<"circum: "<<2*3.14*abc.radius;
}