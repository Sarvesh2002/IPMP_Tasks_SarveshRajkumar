#include <iostream>
using namespace std;

int main()
{
    int a;
    int i;
    cin>>a;
    int b , c , d;
    int m = a;
    for( i = 0 ; i < 4 ; i++ )
    {

        b = (1<<i)&a;
        c = ( 1<<(31-i))&a;
        b = b<<(31-2i);
        c = c>>(31-2i);
        if(b)
        a = a|b;
        else
        a = a&(~(1<<(31-i)));
        if(c)
        a = a|c;
        else
        a = a&(~(1<<i));
    }
    cout<<a;
}