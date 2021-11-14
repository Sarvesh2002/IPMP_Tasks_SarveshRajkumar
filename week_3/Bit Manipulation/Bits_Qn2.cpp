#include <iostream>
#include <cmath>
using namespace std;

void reversebit( int n )
{
   int no = sizeof(n) * 4;
   int rno = 0 ;
   int chk = 1 ;
   for( int i = 0 ; i < no ; i++ )
   {
       if( n & chk )
       rno = rno | 1 ;
       rno = rno << 1 ;
       chk = chk << 1 ;
   }
   rno = rno >> 1;
   cout<<rno;
   
}
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    
    
    reversebit(n);
}
