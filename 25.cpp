#include<iostream>
using namespace std;
int main ()
{
   string name, course, address, rgno;
   int age;

   cout<<"Enter the full name: ";
   getline(cin, name);

   cout<<"Enter your age: ";
   cin>>age;

   cout<<"Enter your Course: ";
    cin.ignore();
   getline (cin, course);

   cout<<"Enter Your Address: ";
   getline (cin, address);


   cout<<"Enter Your registration Number: ";
   getline (cin,rgno);


   cout<<"Hi "<<name<<endl;
   cout<<"Your Age is "<<age<<endl;
   cout<<"You are following "<<course<<endl;
   cout<<"Your address is "<<address<<endl;
   cout<<"Your registration number is "<<rgno<<endl;


    return 0;
}

