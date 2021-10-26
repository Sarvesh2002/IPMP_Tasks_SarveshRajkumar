
#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;
void binarysearch( int arr[30] , int n , int val )
{
    int flag = 0;
    int first,last,mid;
    first = 0;
    last = n-1;
    mid = ( first + last ) / 2;
    while( first <= last )
    {
        if( arr[mid] > val )
        {
            last = mid - 1;
            
        }
        else if( arr[mid] < val )
        {
            first = mid + 1;
            
        }
        else
        {
            flag = 1;
            break;
        }
        mid = ( first + last ) / 2;
    }
    if ( flag == 1 )
    {
        cout<<"The Element "<<val<<" is present in the array in index "<<mid<<" after sorting ";
    }
    else
    {
        cout<<"The Element "<<val<<" is not present in the array ";
    }
}

int main()
{
    int n;
    int arr[30];
    int sr;
    int i;
    cout<<"Enter Number of Elements : ";
    cin>>n;
    cout<<"\nEnter Array Elements :\n";
    for(i=0;i<n;i++)
        cin>>arr[i];
    std::sort(arr,arr+n);
    cout<<"Enter Element to Search for : ";
    cin>>sr; 
    cout<<"Proceeding to Binary Search : \n";
    binarysearch( arr , n , sr );
    
}
