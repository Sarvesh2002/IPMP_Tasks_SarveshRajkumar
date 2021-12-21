#include<iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Enter Number : ";
    cin>>i;
    int count = 0;
    while ( i != 0 )
    {
        if(i%2 != 0)
            count++;
        i = i/2;
    }
    cout<<count;
    
}