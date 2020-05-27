#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n,x;
    for(cin>>T;T;T--)
    {
        cin>>n;
        vector<int>index;
        int i=0;
        for(;i<n;i++)
        {
            cin>>x;
            if(x==1)
            {
                index.push_back(i);
                if(index.size()>1)
                {
                    if((index[((index.size())-1)]-index[((index.size())-2)])<6)
                    {
                        cout<<"NO\n";
                        break;
                    }
                }
            }
        }
        if(i==n)
        cout<<"YES\n";
    }
    
    return 0;
}
