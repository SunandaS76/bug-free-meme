#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int checkIfPrime(int i)
{
    for (int k = 2; k <= i / 2; k++)
    {
        if (i % k == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int i = 0;
    cout << "for loop" << endl;
    for (i = 0; i <= 9; i++)
    {
        cout << i << " ";
    }
    cout << "\nwhile" << endl;

    cout << "prime numbers between 0 to 100\n";
    i = 2;
    while (i <= 100)
    {
        if(checkIfPrime(i) == 1)
            cout<<i<<" ";
        i++;
    }

    return 0;
}