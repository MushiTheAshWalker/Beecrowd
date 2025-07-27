#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n[1000];
    cin >> t;

    for (int i = 0; i < 1000; i++)
    {
        n[i] = i % t;
        cout << "N[" << i << "] = " << n[i] << endl;
    }

    return 0;
}
