#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    for(cin>>t;t;t--)
    {
        int n,m;
        cin>>n>>m;
        if(n<=4)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(n%m==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
