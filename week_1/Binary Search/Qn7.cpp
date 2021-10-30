#include <iostream>
using namespace std;
int pivot(int A[] , int f , int l )
{
    if ( f > l )
    return - 1;
    int m = (f + l)/2;
    if(A[m] == m)
    return m ;
    else if( m > A[m] )
    f = m + 1;
    else
    l = m - 1;
    return pivot( A , f , l );
}

int main()
{
    int n,i;
    int arr[20];
    
    cout<<"Enter Number of elements : ";
    cin>>n;
    cout<<"Enter elements ( sorted array ) :\n";
    for(i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Searching for a pivot element ... \n";
    i = pivot(arr, 0 , n - 1);
    if(i!=-1)
    cout<<"The Pivot is at index "<<i;
    else
    cout<<"Pivot does not exist";
}