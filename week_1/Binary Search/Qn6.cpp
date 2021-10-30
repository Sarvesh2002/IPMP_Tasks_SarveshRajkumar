#include <iostream>
using namespace std;
int BS(int A[] , int f , int l , int key , int k)
{
    if ( f > l )
    return -1;
    int m;
    m = (f + l )/2;
    if(k == 0)
    {
        if(A[m] == key)
        return m;
        else if(A[m] < key)
        f = m + 1;
        else
        l = m - 1;
        
    }
    if(k == 1)
    {
        if( A[m]==key && (m - 1 < 0))
        return 0;
        else if(A[m] == key && A[m - 1] < key)
        return m;
        else if(A[m] < key)
        f = m + 1;
        else
        l = m - 1;
        
    }
    if(k == 2)
    {
        if( m + 1 > l + 1)
        return l ;
        else if ((A[m]==key && A[m + 1] == key )||(A[m] < key))
        f = m + 1;
        else if(A[m] == key && A[m + 1] > key)
        return m;
        else
        l = m - 1;
        
    }
    return BS( A , f , l , key , k );
}
int occ(int A[], int n , int key)
{
    int i1 = BS( A , 0 , n - 1 , key , 0);
    int i2 = BS( A , 0 , i1 , key , 1 );
    int i3 = BS( A , i1 , n - 1 , key , 2);
    
    return i3 - i2 + 1;
}

int main()
{
    int n,i;
    int arr[20];
    int key;
    cout<<"Enter Number of elements : ";
    cin>>n;
    cout<<"Enter elements ( sorted array ) :\n";
    for(i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Number to search for : ";
    cin>>key;
    i = occ(arr, n , key);
    cout<<"The Number "<<key<<" has occurence "<<i<<" in array ";
}