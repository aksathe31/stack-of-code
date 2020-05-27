#include<bits/stdc++.h>
using namespace std;
string s;
vector< vector < char > > arr1;
vector< vector < char > > arr2;
vector< vector < char > > arr3;
vector< vector < char > > arr4;
vector< vector < char > > arr6;
vector< vector < char > > arr12;
void fill(vector< vector < char > > arr,int n,int m)
{int k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			arr[i].push_back(s[k]);		
			k++;		
		}
	}
}

int check(vector< vector < char > > arr,int n,int m){
	int cnt=0;
	for(int i=0;i<m;i++)
	{
		if(arr[0][i]=='X')
		{int j=1;
			while(arr[j][i]=='X')
			{
				j++;
			}
			if(j==n)
			{
				cnt=1;
				break;			
			}
		}	
	}
return cnt;
}
int main()
{
int t;
cin>>t;
while(t--){
int c[]={0,0,0,0,0,0};

cin>>s;
	fill(arr1,1,12);
	fill(arr2,2,6);
	fill(arr3,3,4);
	fill(arr4,4,3);
	fill(arr6,6,2);
	fill(arr12,12,1);

	c[0]=check(arr1,1,12);
	c[1]=check(arr2,2,6);
	c[2]=check(arr3,3,4);
	c[3]=check(arr4,4,3);
	c[4]=check(arr6,6,2);
	c[5]=check(arr12,12,1);

vector<string>v={"1x12","2x6","3x4","4x3","6x2","12x1"};
int cnt=0;
cnt=accumulate(c,c+6,cnt);
cout<<cnt<<" ";
for(int i=0;i<6;i++)
{
	if(c[i]==1)
	{
		cout<<v[i]<<" ";	
	}
}
cout<<endl;
}
return 0;
}
