#include<iostream>
using namespace std;
int main()
{
    int count=0;
     cout<<"Prints all prime numbers between 1 an 100:"<<endl;
        for(int a=1 ; a<=100 ; a++)
        for(int n=1 ; n<=a ; n++)

        {
            if(a%n==0)

            {
                if(count==2) {

                }
                cout<<a<<" ";
            }

        }



    return 0;
}
