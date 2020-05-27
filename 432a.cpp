#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int arr[n];
    k=5-k;
    vector<int>cntr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    
        if(arr[i]<=k){
            cntr.push_back(arr[i]);
        }
    }
    
    if(cntr.size()<3){
        cout<<0;
        return 0;
    }
    else{
        cout<<cntr.size()/3;
    }
    
    
    return 0;
}
