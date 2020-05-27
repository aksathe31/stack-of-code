#include <cmath>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long int ll;
using namespace std;

struct node
{ll data;
ll localmax;
node* next;
};

class stack
{public:
node* top;

void push(ll x,ll localmax);
void pop();
void peek();
};

node* root=NULL;
void stack::push(ll x,ll localmax)
{
    if(root==NULL){
        root=new node;
        root->data=x;
        root->localmax=localmax;
        root->next=NULL;
        top=root;
    
    }
    else{
        root=new node;
        root->data=x;
        root->localmax=localmax;
        root->next=top;
        top=root;
    }
}

void stack::pop()
{
    node* temp=top;
    top=top->next;
    temp->next=NULL;
    delete temp;
}

void stack::peek()
{
    cout<<top->localmax<<endl;
}
int main() {
    stack s;
    ll n,x,t;
    cin>>n;
    while(n--)
    {
        cin>>t;
        if(t==1)
        {
            cin>>x;
            if(root==NULL){
            s.push(x,x);
            }
            else if(s.top->localmax<x)
            {
                s.push(x,x);
            }
            else {
            s.push(x,s.top->localmax);
            }
        }
        
        if(t==2)
        {
            s.pop();
        }
        if(t==3)
        {
        s.peek();
        }

    }
        return 0;
}

