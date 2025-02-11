#include <iostream>
using namespace std;
int main()
{
    double s1,s2,s3;                              // int l1,l2,l3;
                                                 // cout<<"THree side lengths of triangle : ";
    cout<<"Enter the length of side 1 : ";      // cin>>l1>>l2>>l3;
    cin>>s1;
    cout<<"Enter the length of side 2 : ";
    cin>>s2;
    cout<<"Enter the length of side 3 : ";
    cin>>s3;

       if ((s1 + s2 >= s3) && (s2 + s3 >= s1) && (s1 + s3 >= s2)) {
        cout << "This is a valid triangle." << endl;
    } else {
        cout << "This is not a valid triangle." << endl;
    }
    return 0;
}

