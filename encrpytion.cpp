#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.size();
int l=floor(sqrt(n));cout<<l<<endl;
int h=ceil(sqrt(n));cout<<l<<endl;
char arr[l][h];int k=0;
for(int i=0;i<l;i++)
{
	for(int j=0;j<h;j++){		
		arr[i][j]=s[k];
		k++;
	}

}

for(int i=0;i<h;i++)
{
	for(int j=0;j<l;j++)
	{
		cout<<arr[i];
	}
	cout<<" ";
}

return 0;
}
