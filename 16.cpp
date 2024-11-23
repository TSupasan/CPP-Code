#include <iostream>
using namespace std;
int main()
{
    string x,y;
    cout<<"Enter the first name : ";
    getline(cin,x);
    cout<<"Enter the Last name : ";
    getline(cin,y);

    string full_name=x+" "+y;
    cout<<"Full Name is:"<< full_name;
    return 0;
}
