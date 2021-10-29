
#include <iostream>
using namespace std;
int Ceiling(int A[] , int first , int last , int key)
{
   
    int mid;
    
    mid = ( first + last )/2;
    if(first > last)
    return -1;
    
    if(A[first] >= key)
    return first;
    if(A[last] < key)
    return -1;
    
    if(A[mid] == key)
    return mid;
    
    else if( A[mid] < key )
    {
        if( A[mid + 1] >= key && ( mid + 1 <= last ) )
        return mid + 1;
        else
        first = mid + 1;
    }
    else 
    {
        if( A[mid - 1] < key )
        return mid ;
        else
        last = mid - 1;
    }
    
    return Ceiling(A , first , last , key);
}

int Floor(int A[] , int first , int last , int key)
{
   
    int mid;
    
    mid = ( first + last )/2;
    if(first > last)
    return -1;
    
    if(A[first] > key)
    return -1;
    if(A[last] <= key)
    return last;
    
    if(A[mid] == key)
    return mid;
    
    else if( A[mid] < key )
    {
        if( A[mid + 1] > key && ( mid + 1 <= last ) )
        return mid ;
        else
        first = mid + 1;
    }
    else 
    {
        if( A[mid - 1] <= key )
        return mid - 1;
        else
        last = mid - 1;
    }
    
    return Ceiling(A , first , last , key);
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
    i = Ceiling(arr, 0 , n - 1 , key);
    if(i == -1)
    cout<<"Ceiling is not Present !";
    else
    cout<<"Ceiling is Present and it is "<<arr[i];

    i = Floor(arr, 0 , n - 1 , key);
    if(i == -1)
    cout<<"\nFloor is not Present !";
    else
    cout<<"\nFloor is Present and it is "<<arr[i];
    
    
}
