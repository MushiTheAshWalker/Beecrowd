#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a,b;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        int x=a.size();
        int y=b.size();
        if(x>=y&&a.substr(x-y,x)==b)
        {
            cout<<"encaixa"<<endl;
        }
        else
        {
            cout<<"nao encaixa"<<endl;
        }
}
    return 0;
}