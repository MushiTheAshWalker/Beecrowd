#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,result;
    int n;
    int arr[10000];
    while (cin>>s)
    {
        cin>>n;
        result="";
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            result=result+s[arr[i]-1];
        }
        cout<<result<<endl;
    }
    return 0;
}