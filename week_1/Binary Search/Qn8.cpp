#include <iostream>
using namespace std;
int pivot(int A[] , int f , int l )
{
    int m = (f + l)/2;
    if(A[m] > A[m - 1] && A[m] > A[m + 1])
    return m ;
    else if(A[m] > A[m - 1] && A[m] > A[m + 1])
    f = m ;
    else if(A[m] < A[m - 1] && A[m] > A[m + 1])
    l = m ;
    else if(A[m] > A[m - 1] && A[m] < A[m + 1])
    f = m;
    return pivot( A , f , l );
}

int main()
{
    int n,i;
    int arr[20];
    
    cout<<"Enter Number of elements : ";
    cin>>n;
    cout<<"Enter elements  :\n";
    for(i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Searching for a Maximum element ... \n";
    i = pivot(arr, 0 , n - 1);
    cout<<"The Maximum is at index "<<i<<" and it is "<<arr[i];
    
}