#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter Number : ";
    cin>>n;
    int m = n - 2;
    int t = n & m ;
    if( t == 0 )
    cout<<"Number "<<n<<" is a power of 2 !";
    else
    cout<<"Number "<<n<<" is not a power of 2 !";
}
