#include <iostream>
using namespace std;

int main() {
    int r;
    cout << "Enter the number of rows: ";
    cin >> r;

    for (int i=1; i<=r; i++ )//row 1<=5
    {
        if(i==1 || i==r) // T || i=5 so F ==T
        {
            for(int j=1;j<=r;j++)//colum j<=5
            {
                cout<<"* "; //*****
            }
        }
        else
        {
            for(int j=1;j<=r;j++)
            {
                if(j==1 || j==r)
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;

    }
    return 0;
}
