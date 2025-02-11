#include <iostream>
using namespace std;
int main()
{

    for(int i = 50; i >=1 ; i--){
        if(i%7==0 ){
            break;
        }
        cout<<i<<"\n";
    }
    return 0;
}

