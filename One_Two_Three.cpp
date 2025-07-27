#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;

        if (s.length() == 3)
        {
            int one_count = 0;
            if (s[0] == 'o') one_count++;
            if (s[1] == 'n') one_count++;
            if (s[2] == 'e') one_count++;
            if (one_count >= 2)
            {
                cout << "1" << endl;
                continue;
            }

            int two_count = 0;
            if (s[0] == 't') two_count++;
            if (s[1] == 'w') two_count++;
            if (s[2] == 'o') two_count++;
            if (two_count >= 2)
            {
                cout << "2" << endl;
                continue;
            }
        }

        if (s.length() == 5)
        {
            cout << "3" << endl;
        }
    }
    return 0;
}
