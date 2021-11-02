#include <iostream>
using namespace std;
 
void countsort( int a[20] , int n )
{
    int max;
    int i;
    max = a[0];
    int b [20];
    for( i = 0 ; i < n ; i ++ )
        if( max < a[i] )
        max = a[i];
        
    int count[ max + 1 ] = {0};
    int m = max + 1 ;
    for( i = 0 ; i < n ; i++ )
    count[a[i]]++;
    
    for( i = 0 ; i < m - 1 ; i ++ )
    count[i + 1]+= count[ i];
    
    for(i = 0 ; i < n ; i ++ )
    {
        b[count[a[i]] - 1] = a[i];
        count[a[i]]--;
    }
    for(i = 0 ; i < n ; i ++ )
    a[i] = b[i];
    
}
int main()
{
     int n , a[20];
    cout<<"Enter Number of Elements : ";
    cin>>n;
    cout<<"Enter Array Elements : \n";
    for(int i = 0 ; i < n ; i ++)
        cin>>a[i];
    
    countsort( a , n );
    
    cout<<"Sorted Array Elements : \n";
    for(int i = 0 ; i < n ; i ++)
        cout<<a[i]<<endl;
    
}