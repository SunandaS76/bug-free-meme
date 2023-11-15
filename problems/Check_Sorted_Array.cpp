#include <bits/stdc++.h>

using namespace std;

int isSorted(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5}, n = 5;

    printf("%s", isSorted(arr, n) ? "True" : "False");
}
