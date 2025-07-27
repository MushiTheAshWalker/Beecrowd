#include<bits/stdc++.h>
using namespace std;
int main()
{
    string d,n;
    cin>>d>>n;
    while (d!="0"&&n!="0")
    {
        int k=n.size();
        int index;
        for (int i = 0; i < k; i++)
        {
            if(d[i]==n[i])
            {
                index=i;
            }
        }
        
        n.erase(index,1);
        cout<<n<<endl;
        
    }
    return 0;
}