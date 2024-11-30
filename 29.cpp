#include <iostream>
using namespace std;
int main()
{
    int number;

    cout<<"Enter a number : ";
    cin>>number;

    if (number > 0) {
        cout<<"Positive Number"<<endl;
    }

     else if (number < 0) {
        cout<<"Negative Number"<<endl;
      }

       else {
        cout<<"Zero"<<endl;
      }
    return 0;
}
