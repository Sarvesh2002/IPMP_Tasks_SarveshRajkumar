#include<iostream>
using namespace std;

int main()
{

    int a , b;
    cout<<"Enter Numbers : \n";
    cin>>a>>b;
    int c = (a&~(b))|(~(a)&b);
    int count = 0;
    while ( c != 0 )
    {
        if(c%2 != 0)
            count++;
        c = c/2;
    }
    cout<<count;
    
}