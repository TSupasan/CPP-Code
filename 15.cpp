
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double num1,num2;
    cout<<"Enter the two number: ";
    cin>>num1;
    cin>>num2;

    double power=pow(num1,num2);
    cout<<"raised to the power of "<<num2<<" is:"<<power<<endl;


    cout<<"Square root of "<<num1<<" is:"<<sqrt(num1)<<endl;
    cout<<"Square root of "<<num2<<" is:"<<sqrt(num2)<<endl;
    cout<<"minimum of two numbers is:"<<min(num1,num2)<<endl;
    cout<<"maximum of two numbers is:"<<max(num1,num2)<<endl;
    cout<<"round "<<num1<<" is:"<<round(num1)<<endl;
    cout<<"round "<<num2<<" is:"<<round(num2)<<endl;


    return 0;

}
