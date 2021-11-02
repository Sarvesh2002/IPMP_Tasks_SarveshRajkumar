/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int part( int a[20] , int f , int l )
{
    int piv = a[l];
    int ind = f ;
    int temp;
    for( int i = f ; i < l ; i++ )
    {
        if ( a[i] <= piv )
        {
            temp = a[i];
            a[i] = a[ind];
            a[ind] = temp;
            ind++;
            
        }
    }
    temp = a[l] ;
    a[l] = a[ind];
    a[ind] = temp;
    return ind;
}

void quicksort( int a[20] , int f , int l )
{
    if(f < l)
    {
        int ind = part( a , f , l );
        quicksort( a , f , ind - 1 );
        quicksort( a , ind + 1 , l );
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
    
    quicksort( a , 0 , n - 1 );
    
    cout<<"Sorted Array Elements : \n";
    for(int i = 0 ; i < n ; i ++)
        cout<<a[i]<<endl;
    
    
}
