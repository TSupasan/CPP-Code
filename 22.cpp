#include <iostream>
using namespace std;
int main()
{
    int h,m,s;
    cout << "Enter Hours";
    cin >>h;
    cout << "Enter Minutes";
    cin >>m;
    cout << "Enter Seconds";
    cin >>s;

    int total = h*3600 + m*60 + s;
    cout << "Total Seconds = "<<total;
    return 0;

}
