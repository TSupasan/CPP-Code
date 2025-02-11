#include<iostream>
using namespace std;
int main()
{
        int r;

        cout<<"Enter number of rows: ";
        cin>>r;

        for(int i=1 ; i<=r ; i++) //rows
        {
          for (int n=0; n<i; n++) //cols
          {
            cout<<"*";
          }
          cout<<endl;

        }

    return 0;
}


