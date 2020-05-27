#include<bits/stdc++.h>
using namespace std;
stack<int>s1,s2;
void printTop()
{
    if(!s2.empty())
    {
	cout<<s2.top()<<endl;
    }
    else
	{
	    while(!s1.empty())
	    {
	        s2.push(s1.top());
	        s1.pop();
	    }
	    cout<<s2.top()<<endl;
	}
}
void enq(int x)
{
    s1.push(x);
}
void deq()
{
    if(!s2.empty())
    {
	s2.pop();
    }
    else
	{
	    while(!s1.empty())
	    {
	        s2.push(s1.top());
	        s1.pop();
	    }
	    s2.pop();
	}
}
int main()
{
    enq(1);
    enq(2);
    enq(4);
    enq(6);
    enq(47);
    
printTop();
    deq();
    printTop();
    deq();
	enq(3); printTop();   
	deq();printTop();
    deq();printTop();
    deq();printTop();
	enq(12);
enq(144);
deq();printTop();
deq();printTop();
deq();printTop();
deq();
    
    return 0;
}
