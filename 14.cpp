#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the two number: ";
    cin>>x;
    cin>>y;

    int power=pow(x,y);
    cout<<"raised to the power of "<<x<<" is:"<<power<<endl;


    cout<<"Square root of "<<x<<" is:"<<sqrt(x)<<endl;
    cout<<"Square root of "<<y<<" is:"<<sqrt(y)<<endl;
    cout<<"minimum of two numbers is:"<<min(x,y)<<endl;
    cout<<"maximum of two numbers is:"<<max(x,y)<<endl;


    return 0;

}
