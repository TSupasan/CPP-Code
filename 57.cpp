#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={{2,3,4,5},{6,7,8,9},{10,11,12,13}};

    for (int i=0; i<3; i++)
    {
        cout<<"row:"<<i<<endl;
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<endl;
        }
    }
}
