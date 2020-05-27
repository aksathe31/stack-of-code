#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b;
    for(cin>>t;t;t--)
    {
        cin>>a>>b;
        if(b>a)
        {
            cout<<b-a<<"\n";
        }
	else if(a%b==0)
	{
		cout<<0<<"\n";
	}
        else if(a>b)
        {
            cout<<b-a%b<<"\n";
        }
    }
    return 0;
}
