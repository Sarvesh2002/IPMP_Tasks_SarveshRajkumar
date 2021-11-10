/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void heap( int A[] , int n , int ind )
{
    int max , l , r ;
    l = 2 * ind + 1 ;
    r = 2 * ind + 2 ;
    max = ind ;
    if( r < n && A[r] > A[max] )
    max = r;
    if( l < n && A[l] > A[max] )
    max = l;
    
    swap( A[ind] , A[max] );
    if( max != ind )
    heap( A , n , max );
}

void heapsort( int A[] , int n  )
{
    int i ;
    i = n / 2 - 1 ;
    for( ; i >= 0 ; i -- )
        heap( A , n , i );
    
    for( i = 0 ; i < n - 1 ; i++ )
    {
        swap( A[0] , A[n - 1 - i] );
        heap( A , n - 1 - i , 0 );
    }
}

int main()
{
     int n , A[20];
    cout<<"Enter Number of Elements : ";
    cin>>n;
    cout<<"Enter Array Elements : \n";
    for(int i = 0 ; i < n ; i ++)
        cin>>A[i];
    
    heapsort( A , n );
    
    cout<<"Sorted Array Elements : \n";
    for(int i = 0 ; i < n ; i ++)
        cout<<A[i]<<endl;
    
    
}