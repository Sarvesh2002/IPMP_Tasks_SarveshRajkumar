/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void insertionsort( int A[] , int n )
{
    int min , i , j;
    
    for ( i = 1 ; i < n ; i ++ )
    {
        min = A[i];
        j = i - 1 ;
        while( j >= 0 && A[j] > min )
        {
            A[ j + 1 ] = A[j];
            j--;
        }
        A[ j + 1 ] = min;
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
    
    insertionsort( A , n );
    
    cout<<"Sorted Array Elements : \n";
    for(int i = 0 ; i < n ; i ++)
        cout<<A[i]<<endl;
    
    
}
