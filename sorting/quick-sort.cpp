#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int partitionArray(vector<int>&arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j)
            swap(arr[i], arr[j]);
    }
        swap(arr[low], arr[j]);
        return j;
}
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int index = partitionArray(arr, low, high);
        quickSort(arr, low, index - 1);
        quickSort(arr, index + 1, high);
    }
}
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter array: ";
    vector<int> arr;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    // sorting logic
    quickSort(arr, 0, arr.size() - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}