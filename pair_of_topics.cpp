// problem
// https://codeforces.com/problemset/problem/1324/D

#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
    }

    // brut force

    long long int cnt = 0;

    // method 1

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((a[i] + a[j]) > (b[i] + b[j]))
                cnt++;
        }
    }
    cout << cnt;

    // method 2

    // Using PBDS
    // elements are not distinct
    // a[i] - b[i] > b[j] - a[j] --->(1)
    // c[i] = a[i] - b[i]
    // hence (1) = c[i] > -c[j] and i < j --> equivalent to inversion count

    typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>
        PBDS;

    PBDS St;

    for (int i = 0; i < n; i++)
    {
        // cout<<a[i]<<" ";
        cnt += i - St.order_of_key({-c[i], 1000000});

        St.insert({c[i], i});
    }

    cout << cnt;
}

// test cases

// 5
// 4 8 2 6 2
// 4 5 4 1 3
// 7
