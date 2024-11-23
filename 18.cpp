#include <iostream>
using namespace std;
int main()
{
    string x;
    cout << "Enter the string ";
    getline(cin,x);
    x[0]='Q';
    cout<<"x is: "<<x;
    return 0;
}
