#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;

    int a2D[n][m];
    for(int i=0; i<n;i++)
    {
        cout<<"row:"<<i<<endl;
        for(int j=0;j<m;j++)
        {
           cin>>a2D[i][j];
        }
    }
    cout<<"{";
    for(int i=0; i<n; i++)
    {
        cout<<"{";
    }

}
