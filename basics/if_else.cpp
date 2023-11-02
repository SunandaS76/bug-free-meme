#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x;
    while (true)
    {
        cout << "enter input : ";
        cin >> x;

        if (x == 10)
            cout << "x is 10" << endl;

        else if (x == 15)
            cout << "x is 15" << endl;

        else
            cout << "x is something else" << endl;
    }

    return 0;
}