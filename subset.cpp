#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > getAllSubsets(vector<int> set)
{
    vector< vector<int> > subset;
    vector<int> empty;
    subset.push_back( empty );

    for (int i = 0; i < set.size(); i++)
    {
       vector< vector<int> > subsetTemp = subset;  //making a copy of given 2-d vector.

        for (int j = 0; j < subsetTemp.size(); j++)
            subsetTemp[j].push_back( set[i] );   // adding set[i] element to each subset of subsetTemp. like adding {2}(in 2nd iteration  to {{},{1}} which gives {{2},{1,2}}.

        for (int j = 0; j < subsetTemp.size(); j++)
            subset.push_back( subsetTemp[j] );  //now adding modified subsetTemp to original subset (before{{},{1}} , after{{},{1},{2},{1,2}}) 
    }
    return subset;
}

int main()
{
vector<int> arr={10,12,19,22,24,25};
vector< vector<int> > allSubsets=getAllSubsets(arr);

for (int i = 0; i < allSubsets.size(); i++)
{
    for (int j = 0; j < allSubsets[i].size(); j++)
    {
        cout << allSubsets[i][j]<<" ";
    }
cout<<"\n";
}

};
