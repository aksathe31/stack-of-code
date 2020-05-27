#include<bits/stdc++.h>
using namespace std;

int t,n,s,o,z;
int p[1000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while( t-- ){
        cin >> n >> s ;
        o=z=INT_MAX;
        for(int i=0;i<n;i++){
            cin >> p[i];
        }
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x==0){
                if(p[i]<z){
                    z=p[i];
                }
            }else{
                if(p[i]<o){
                    o=p[i];
                }
            }
        }
        if(o+z+s<=100)
        cout<<"yes\n";
        else
        cout<<"no\n";
    }

	return 0;
}
