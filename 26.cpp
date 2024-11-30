#include <iostream>
using namespace std;
int main()
{
    int age = 25;
    bool isStudent = true;

    bool x=(age > 18 && isStudent);  //25>18 && true == true&&true = true
    bool y=(age < 18 || isStudent);  //25<18 || true == false || true = true
    bool z=(age < 18 |! isStudent); // !(true)= false

    cout<<"age > 18 && isStudent) is : "<<x<<"\n"<<"(age < 18 || isStudent) is :"<<y<<"\n"<<"(age < 18 |! isStudent) is :"<<z;

    return 0;

}
