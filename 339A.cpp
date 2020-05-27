#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>arr;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='+')
        {
            arr.push_back((((int)(s[i]))-48));
        }
    }
sort(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size();i++)
        {
            cout<<arr[i];
            if(i<(arr.size()-1))
            cout<<"+";
        }
    return 0;
}
