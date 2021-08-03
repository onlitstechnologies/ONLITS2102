#include<iostream>
using namespace std;
int main()
{
    int n, i=1;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"The factors of "<<n<<" are:"<<endl;      //endl for \n
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d ", i);
        }
        i++;
    }
    cout<<endl;
    return 0;
}