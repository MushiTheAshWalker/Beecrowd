#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    int count =0;
    cin>>n;
    for (int i = 0; i <n.size(); i++)
    {
        if(n[i]=='1')
        {
            count++;
        }
    }
    if(count%2!=0)
    {
        cout<<n<<"1"<<endl;
    }
    else
    {
        cout<<n<<"0"<<endl;
    }
    return 0;
}