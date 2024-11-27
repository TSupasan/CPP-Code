#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int time;
    double principal,simpleinterest,compoundinterest,rate;


    cout<<"Enter the principal amount: ";
    cin>>principal;
    cout<<"Enter the rate of interest: ";
    cin>>rate;
    cout<<"Enter the time period(in year): ";
    cin>>time;

    simpleinterest = (principal*rate*time)/100;
    cout<<"Simple Interest = " <<simpleinterest<<endl;

    compoundinterest = principal*pow((1+rate/100),time)-principal;
    cout<<"Compound Interest = " <<compoundinterest;

    return 0;


}
