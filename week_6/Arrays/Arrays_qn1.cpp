#include <iostream>
using namespace std;

int main()
{
    int a[20], b[20];
    int u[20], is[20];
    int n1, n2, un, in;
    int i;
    cin >> n1 >> n2;
    for (i = 0; i < n1; i++)
        cin >> a[i];
    for (i = 0; i < n2; i++)
        cin >> b[i];
    i = 0;
    int j = 0;
    int k1 = 0, k2 = 0;
    while (i != n1 & j != n2)
    {
        if (a[i] > b[j])
        {
            u[k1++] = b[j];
            j++;
        }
        else if (a[i] < b[j])
        {
            u[k1++] = a[i];
            i++;
        }
        else
        {
            u[k1++] = a[i];
            is[k2++] = a[i];
            i++;
            j++;
        }
    }
    while (i != n1 && j == n2)
    {
        u[k1++] = a[i++];
    }
    while (i == n1 && j != n2)
    {
        u[k1++] = b[j++];
    }
    cout << "Union is : \n";
    for (i = 0; i < k1; i++)
    {
        cout << u[i] << " ";
    }
    cout << "\nIntersection is : \n";
    for (i = 0; i < k2; i++)
    {
        cout << is[i] << " ";
    }
}