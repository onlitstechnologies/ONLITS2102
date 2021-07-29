#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"The factors of "<<n<<" are:"<<endl;      //endl for \n
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d ", i);
        }
    }
    cout<<endl;
    return 0;
}