#include<iostream>
using namespace std;
int main()
{
    float c,f;
    cout<<"Enter the temperature in Celsius: \n";
    cin>>c;

    cout<<"Enter the temperature in Fahrenheit: \n";
    cin>>f;

    cout<<"Celsius to Fahrenheit\n";
    cout<<"F = "<<(9/5*c)+32 <<endl;
    cout<<endl;

    cout<<"Fahrenheit to Celsius\n";
    cout<<"C = "<<(f-32)*5/9;


    return 0;
}
