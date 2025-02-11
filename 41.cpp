#include<iostream>
using namespace std;
int main()
{
     cout<<"Prints all prime numbers between 1 and 100:"<<endl;
        for(int i=1 ; i<=100 ; i++){ //i=5
            bool isprime = true;
            if(i==1)
            {
                isprime=false;

            }
            else{//i=5
                for (int j=2; j<=i/2; j++){ //i==2; 2<=5/2 2<=2(becaus integer)
                    if(i%j == 0){//5%2==0 (fals 5%2=1)
                        isprime = false;//false=false so its true
                        break;
                    }
                }
            }
            if(isprime)
            {
                cout<<i<<" ";
            }
        }




    return 0;
}
