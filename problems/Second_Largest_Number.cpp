// https://www.codingninjas.com/codestudio/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void getElements(vector<int>&arr,int n)
{
    // Method 1
    int minn = INT_MAX;
    int maxx = INT_MIN;

    sort(arr.begin(), arr.end());
    minn = arr[n-2];
    maxx = arr[1];
    // return {arr[n-2], arr[1]};

    // Method 2
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    int minS = INT_MAX, maxS = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] < minS && arr[i] > min)
            minS = arr[i];
        if(arr[i] > maxS && arr[i] < max)
            maxS = arr[i];
    }

    // Method 3
    // In single loop
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            minS = min;
            min = arr[i];
        }
        else if(arr[i]<minS)
            minS = arr[i];
        
        if(arr[i]>max){
            maxS = max;
            max = arr[i];
        }
        else if(arr[i]>maxS)
            maxS = arr[i];
    }

    cout<<"Second smallest is "<<minS<<endl;
    cout<<"Second largest is "<<maxS<<endl;
}

int main()
{

    vector<int>arr ={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);
    return 0;
}
