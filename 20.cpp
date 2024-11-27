#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double radius,height,volume,area;
    cout<< "Enter radius of the cylinder: ";
    cin>>radius;
    cout<< "Enter height of the cylinder: ";
    cin>>height;

    volume = 2*3.14*radius*radius*height; // or use M_PI * pow(radius, 2) * height;
    cout << "Volume of the Cylinder = " << volume << endl;
    area = 3.14*radius*radius*height; // or use 2 * M_PI * radius * (radius + height);
    cout << "Surface Area of the Cylinder = "<<area;
    return 0;


}
