#include<iostream>
using namespace std;
int main ()
{
    int x=10, y=20;
    //post decrement operator
    cout<<"x=="<<x--<<endl;
    cout<<"x="<<x<<endl;

    //post-decrement operator
    cout<<"x--"<<x--<<endl;//x=10
    cout<<"x="<<x<<endl;

    //pre-decrement operator
    cout<<"y=="<<--y<<endl;//y=19
    cout<<"y="<<y<<endl;//=19

    int z=++y/++x; //21/
    cout<<"x="<<x++<<endl;
    cout<<"x="<<++x<<endl;
    cout<<"z:"<<z<<endl;

    int a=(y++)-(--x);
    cout<<"a;"<<a<<endl;
    int b=--y+--x;
    cout<<"b:"<<b<<endl;
    return 0;
}
