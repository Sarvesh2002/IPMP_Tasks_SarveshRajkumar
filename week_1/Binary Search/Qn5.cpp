
#include <iostream>
using namespace std;

void Subarray(int A[], int n)
{
    int key1 = -1;
    int key2 = -1;
    int i;
    int sub1 = 0;
    int sub2 = 0;
    int temp;

    int max, maxsub;
    int min, minsub;
    for (i = 0; i < n - 1; i++)
    {
        if (sub1 == 0)
            if (A[i] > A[i + 1])
            {
                key1 = i;
                sub1 = 1;
            }
        if (sub2 == 0)
            if (A[n - i - 1] < A[n - i - 2])
            {
                key2 = n - i - 1;
                sub2 = 1;
            }
    }

    if (key1 == -1)
        cout << "Array is Sorted !";
    else
    {
        min = A[key1];
        max = A[key2];

        for (i = key1; i <= key2; i++)
        {
            if (A[i] > max)
                max = A[i];
            if (A[i] < min)
                min = A[i];
        }
       
        for (i = 0; i < key1; i++)
        {
            if (A[i] > min)
            {
                key1 = i;
                break;
            }
        }
        temp = key2;
        for (i = key2 + 1; i < n; i++)
        {
            if (A[i] < max)
            {
                temp++;
            }
        }
        key2 = temp;
        cout << "\nIndices of unsorted sub array are " << key1 << " and " << key2;
    }
}

int main()
{
    int n, i;
    int arr[20];
    int key;
    cout << "Enter Number of elements : ";
    cin >> n;
    cout << "Enter elements ( unsorted array ) :\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Subarray(arr, n);
}
