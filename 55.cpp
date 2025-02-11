#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" integer elements: "<<endl;
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Normal array elements:"<<endl;
    cout<<"{ ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl;

    arr[3]=15;
    arr[5]=20;
    cout<<"After update array elements:"<<endl;
    cout<<"{ ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"}";

    return 0;
}

