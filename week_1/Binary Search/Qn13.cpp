/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int BS(int A[] , int first , int last )
{
   
    int mid;
    mid = ( first + last )/2;
    if( A[mid] == 0 && A[mid + 1] == 1 )
    return mid + 1;
    else if( A[mid] == 1 && A[mid - 1] == 0 )
    return mid;
    else if( A[mid] == 1 && A[mid - 1] == 1 )
    last = mid - 1;
    else if( A[mid] == 0 && A[mid + 1] == 0 )
    first = mid + 1;
    return BS ( A , first , last );
    
}

int Search(int A[] , int n )
{
    int i , j ;
    i = 0;
    j = 1;
    if( A[j] != 1 )
    {
        i = j;
        j = 2*j;
    }
    
    return BS( A , i , j );
    
}
int main()
{
    int n,i;
    int arr[20];
    int key;
    cout<<"Enter Number of elements : ";
    cin>>n;
    cout<<"Enter Sorted Binary Number :\n";
    for(i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Searching for first occurence of 1 ...\n";
    
    i = Search(arr, n );
    cout<<"\nFirst Occurence of 1 is at index "<<i;
    
    
}
