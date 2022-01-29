#include <iostream>
using namespace std;

int main()
{
    int a , b;
    cin>>a;
    int carry ;
    
    while( b != 0 )
    {
        carry = a & b;
        a = a ^ b;
        b = carry<<1;
        
    }
   cout<<b;
    
}