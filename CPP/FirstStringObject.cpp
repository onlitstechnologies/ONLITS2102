#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name: ";
    //cin>>name;                                //single word string
    getline(cin, name);                         //multi word string
    cout<<"Good afternoon! "<<name<<endl;
    return 0;
}