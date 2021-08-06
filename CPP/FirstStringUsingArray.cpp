#include<iostream>
using namespace std;
int main()
{
    char name[30];
    cout<<"Enter your name: ";
    //cin>>name;                                //single word string
    cin.getline(name,30);                       //multi word string
    cout<<"Good afternoon! "<<name<<endl;
    return 0;
}