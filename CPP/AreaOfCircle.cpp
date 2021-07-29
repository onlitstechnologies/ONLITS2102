#include<iostream>              //1st diff
using namespace std;
#define PI 3.14
int main()
{
    float r, a;
    cout<<"Enter radius: ";     //2nd diff
    cin>>r;                     //3rd diff
    a = PI * r * r;
    cout<<"The area of circle is "<<a<<" sq. units"<<endl;
    return 0;
}