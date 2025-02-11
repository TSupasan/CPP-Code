#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    if (n <=0 )
    {
        cout<<"Array size must be greater than 0."<<endl;
    }

    int arr[n];
    cout<<"Enter "<<n<<" integer elements: "<<endl;
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }

    int sum = 0,mini=arr[0],maxi=arr[0];

    for(int i=0; i<n; i++)
    {
        sum += arr[i];//sum=0+2=2

        if(arr[i] < mini)//2<2 false
        {
            mini=arr[i];//mini=2
        }

        if(arr[i] > maxi)//2>2
        {
            maxi=arr[i];//maxi=2
        }
    }

    cout<<"Sum of elements: "<<sum<<endl;
    cout<<"Minimum elements: "<<mini<<endl;
    cout<<"Maximum element: "<<maxi<<endl;

    return 0;
}
