#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a ;
    cin>>a;
    float b = log2(a);
    int c = (int)b;
    if(c != b)
    cout<<-1;
    else
    cout<<b;
    
}