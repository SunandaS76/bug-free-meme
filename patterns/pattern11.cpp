#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2)
            {
                if (j % 2)
                    cout << "1 ";
                else
                    cout << "0 ";
            }
            else
            {
                if (j % 2)
                    cout << "0 ";
                else
                    cout << "1 ";
            }
        }
        cout << endl;
    }
    return 0;
}
