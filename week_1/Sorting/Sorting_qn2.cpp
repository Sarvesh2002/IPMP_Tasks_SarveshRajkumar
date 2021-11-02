/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
void merge( int A[]  , int f , int m , int l )
{
    int i , j , k;
   
    int n1 = m - f + 1;
    int n2 = l - m;
  
   
    int L[n1];
    int R[n2];
    
    for ( i = 0; i < n1; i++)
        L[i] = A[f + i];
    for ( j = 0; j < n2; j++)
        R[j] = A[m + 1 + j];
  
    int m1 = 0;
    int m2 = 0; 
    i = f ; 
  
    
    while (m1 < n1 && m2 < n2) 
    {
        if (L[m1] <= R[m2]) {
            A[i++] = L[m1];
            m1++;
        }
        else {
            A[i++] = R[m2];
            m2++;
        }
    }
    
    while (m1 < n1) 
    {
        A[i++] = L[m1++];
    }
    
    while (m2 < n2) 
    {
        A[i++] = R[m2++];
    }
    
}
void mergesort( int A[20] , int n )
{
    float val = log(n)/ log(2);
    int x = val;
    int i , j , k , m;
    int l ;
    for( l = 0 ; l < x ; l++ )
    {
        i = pow(2,l);
        for( j = 0 ; j < n - 1 ; j+= 2*i)
        {
            m = (2*j + 2*i - 1 )/2;
            merge( A , j , m , j+2*i - 1 );
        }
    }
    if( n % 2 != 0 )
    {
        l--;
        i = pow(2,l);
        j = 2*i ;
        m = ( j + n - 1 )/2;
        merge( A , j , m , n - 1 );
    }
    if( val > x )
    {
        m = j - 1 ;
        merge( A , 0 , m , n - 1 );
    }
}
int main()
{
    int n;
    int arr[20];
    cout<<"Enter Number of elements : ";
    cin>>n;
    cout<<"Enter elements :\n";
    for( int i = 0 ; i < n ; i++ )
        cin>>arr[i];
    mergesort( arr , n );
    cout<<"\nPrinting Sorted array \n";
    for(  int i = 0 ; i < n ; i ++ )
        cout<<arr[i]<<endl;
}