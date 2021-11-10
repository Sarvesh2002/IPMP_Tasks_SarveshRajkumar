#include <iostream>
using namespace std;
 
void bubblesort( int A[] , int n )
{
    int i , j ;
    for ( i = 0 ; i < n - 1 ; i++ )
    {
        for( j = 0 ; j < n - i - 1 ; j++ )
        {
            if( A[j + 1] < A[j] )
            swap( A[j + 1] , A[j] );
        }
    }
}
int main()
{
     int n , a[20];
    cout<<"Enter Number of Elements : ";
    cin>>n;
    cout<<"Enter Array Elements : \n";
    for(int i = 0 ; i < n ; i ++)
        cin>>a[i];
    
    bubblesort( a , n );
    
    cout<<"Sorted Array Elements : \n";
    for(int i = 0 ; i < n ; i ++)
        cout<<a[i]<<endl;
    
}