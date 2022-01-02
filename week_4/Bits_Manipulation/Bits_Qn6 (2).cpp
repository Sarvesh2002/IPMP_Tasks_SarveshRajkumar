include <iostream>
using namespace std;

int main()
{
    int n;
    int ab;
    cin>>n;
    int m = n>>(sizeof(int)*8 - 1);
    
    if( m == 0 )
    {
        ab = n ;
    }
    else
    {
        ab = (n - 1)^m;
    }
    cout<<ab;
}