#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    char x;

    cout<<"Enter the first number"<<endl;
    cin>>n1;
    cout<<"Enter the second number"<<endl;
    cin>>n2;

    cout<<"Enter the one operator "<<endl;
    cin>>x;

    if (x=='+'){
        cout<<n1<<"+"<<n2<<"="<<n1+n2;
    }

    else if (x=='-'){
        cout<<n1<<"-"<<n2<<"="<<n1-n2;
    }

    else if (x=='*'){
        cout<<n1<<"*"<<n2<<"="<<n1*n2;
    }

    else if (x=='/'){
        cout<<n1<<"/"<<n2<<"="<<n1/n2;
    }

    else {
        cout<<"Invalid Operator! ";
    }
    return 0;

}
