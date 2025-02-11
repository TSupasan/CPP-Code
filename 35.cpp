#include<iostream>
using namespace std;
int main()
{
        int a,fact=1;

        cout<<"Enter a number"<<endl;
        cin>>a;

        for(int i=1 ; i<=a ; i++)
        {
          fact=fact*i;//1*1//1*2
        }
        cout<<"Factorial of given number: "<<fact;


    return 0;
}

