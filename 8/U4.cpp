
#include <iostream>
using namespace std;
int main()
{
    string city,country;
    cout<<"Enter the country name ";
    cin>>country;
    cin.ignore();


    cout<<endl;

    cout<<"Enter the city ";
    getline(cin,city);



    cout<<"You live in "<<city<<","<<country;
    return 0;
}


