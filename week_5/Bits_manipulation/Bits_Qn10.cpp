#include <iostream>
using namespace std;
int main()
{
    int a ;
    cin>>a;
    int b = 0;
    int i;
    int x , y;
    int j;
    for( i = 0 ; i < 8*sizeof(int) ; i+=2 )
    {
        x = ( 1<<i )& a;
        y = ( 1<<(i+1) )& a;
        x = x<<1;
        y = y>>1;
        b = b | ( x|y);
        
    }
    cout<<b;
}
