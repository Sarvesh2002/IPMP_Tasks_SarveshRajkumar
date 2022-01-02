#include <iostream>
using namespace std;

int rr ( int a , int n )
{
    if( n > 0 )
    {
        int x = a & 1;
        a = a >> 1;
        int i = sizeof(int)*8 - 1;
        x = x<<i;
        a = a ^ x;
        return rr( a , n - 1 );
    }
    else
    return a;
}

int lr ( int a , int n )
{
    if( n > 0 )
    {
        int i = sizeof(int)*8 - 1;
        int x = 1<<i;
        x = a & x;
        a = a << 1;
        if(x)
        a = a ^ 1;
        return lr( a , n - 1 );
    }
    else
    return a;
    
}
int main()
{
    int a;
    int n;
    int a1 , a2;
    cin>>a>>n;
    a1 = rr( a , n );
    a2 = lr( a , n );
    cout<<a1<<" "<<a2;
    
}