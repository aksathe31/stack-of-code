#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;cin>>n;
    vector<int> arr;
    vector<int>::iterator it;
    for(int i=0;i<n;i++)
    {
     cin>>x;
     arr.push_back(x);
    }
    sort(arr.begin(),arr.end());

	it=unique(arr.begin(),arr.end());  	
	arr.resize(distance(arr.begin(),it));

    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++)
    cout<<arr.at(i)<<" ";
    
        return 0;
}
