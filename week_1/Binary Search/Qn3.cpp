#include <iostream>
using namespace std;
int BS(int A[] , int first , int last , int key)
{
   
    int mid;
    while( last - first > 1)
    {
        mid =  first + last/2;
        if( A[mid] < key )
        first = mid ;
        else
        last = mid ;
        
    }
    
    if(A[last] == key)
    return last;
    if(A[first] == key)
    return first;
    else
    return -1;
}
int Majcheck(int A[], int n , int key)
{
    int i = BS(A , 0 , n - 1 , key );
    if ( i == -1 )
    return 0;
    else if(i + n/2 < n - 1 && ( A[i + n/2] == key ))
    return 1;
    else
    return 0;
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
    i = Majcheck(arr, n , key);
    if(i == 0)
    cout<<"Element "<<key<<" is not in Majority !";
    else
    cout<<"Element "<<key<<" is in Majority !";
    
    
}