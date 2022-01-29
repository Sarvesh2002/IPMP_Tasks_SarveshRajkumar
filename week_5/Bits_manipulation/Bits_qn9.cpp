#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b = (((a^(a-1))+1))>>1;
    cout<<log2(b) + 1;
    
}