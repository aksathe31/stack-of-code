#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int>arr;int a;
for(int i=0;i<n;i++){cin>>a;
arr.push_back(a);
}

int max=max_element(arr.begin(),arr.end())-arr.begin();
int min=min_element(arr.rbegin(),arr.rend())-arr.rbegin();
cout<<max<<" "<<min<<endl;
int cnt=0;
cnt=cnt+min;

min=n-1-min;
cout<<max<<" "<<min<<endl;
cout<<cnt<<endl;
cnt=cnt+max;

cout<<cnt<<endl;
if(min<max)
{
	cnt=cnt-1;
}
cout<<cnt;

return 0;
}
