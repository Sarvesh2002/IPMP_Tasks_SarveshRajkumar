#include <iostream>
using namespace std;

int Search(int A[] , int first , int last , int key)
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
int Check(int A[] , int n , int key)
{
    if(A[0]>key)
    return -1;
    else
    return Search( A , 0 , n - 1 , key);
}
int main()
{
    int n,i;
    int arr[20];
    int key;
    cout<<"Enter Number of elements : ";
    cin>>n;
    cout<<"Enter elements (sorted array ) :\n";
    for(i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Number to search for : ";
    cin>>key;
    i = Check(arr, n , key);
    if(i==-1)
    cout<<"Element is not Present !";
    else
    cout<<"Element is Present in index "<<i;
    
}