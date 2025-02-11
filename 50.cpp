#include<iostream>
using namespace std;
int main()
{
    for(int i=1 ; i<=5 ; i++) // rows
    {
        for (int j=0; j<=5-i; j++) // spaces
        {
            cout<<" ";
        }
        for (int n=0; n<i; n++) // stars
        {
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}


