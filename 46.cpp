#include <iostream>
using namespace std;
int main()
{
    int x = 15;

    cout<<"While loop output:"<<endl;
    while (x<10) {
        cout<<"x = "<<x<<endl;
        x++;
    }
    cout<<"Do-while loop output:";
    do{
        cout<<"x = "<<x<<endl;
        x++;
    }
    while (x < 10);
    return 0;
}
