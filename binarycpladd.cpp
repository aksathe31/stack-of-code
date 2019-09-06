#include<iostream>
#include<cstring>
using namespace std;
struct node
{
	int data;
	node *next,*prev;
};
int flag_for_first_time=0;
class dll
{public:
node *head1,*tail1;
	int n;

    //void takelen();
	void create();
	void input();
	void display();
	void cpl1(dll obj);
	void cpl2(dll obj);

};

/*void dll::takelen()
{
cout<<"\n\tenter the length of binary number: ";
	cin>>n;
}*/

void dll::cpl2(dll obj)
{dll compl2;
    compl2.create();
	node *p=tail1;
    node* q=compl2.tail1;
	int i=0,flag=0;
cout<<"\n\tTwo's complement is: ";
	while(p->data!=1)
	{q->data=p->data;
	p=p->prev;
	q=q->prev;
	i++;
	flag=1;
	}
if(flag==1)
{
    q->data=p->data;
	p=p->prev;
	q=q->prev;
	i++;
}
while(i<n)
{//cout<<"("<<p->data<<")";
	if(p->data==1)
	q->data=0;
	else
	q->data=1;

	p=p->prev;
	q=q->prev;
	i++;
}
node *t=compl2.head1;
i=0;

while(i<n)
{
	cout<<t->data;
	t=t->next;
	i++;
}
cout<<"\n\t";
flag_for_first_time=0;
}

void dll::cpl1(dll obj)
{
	node *p=head1;
	int i=0;
cout<<"\n\tOne's complement is: ";
while(i<n)
{
	if(p->data==1)
	cout<<"0";
	else
	cout<<"1";

	p=p->next;
	i++;
}
cout<<"\n\t";

}

void dll::display()
{
node *p=head1;
int i=0;
cout<<"\n\tThe number is: ";
while(i<n)
{
	cout<<p->data;
	p=p->next;
	i++;
}
cout<<"\n\t";


}

void dll::create()
{if(flag_for_first_time==0)
    {cout<<"\n\tenter the length of binary number: ";
	 cin>>n;
    }
	node *ptr;

	head1=new node;
	ptr=head1;
	node *q,*p;
	p=q=ptr;
	int i=1;
	while(i<n)
	{
		p->next=new node;
		p=p->next;
		p->prev=q;
		q=q->next;
		i++;
	}tail1=p;
    flag_for_first_time=1;
}
void dll::input()
{node *ptr;
	ptr=head1;
	node *p;
    p=ptr;
	string s;
	cout<<"\n\tenter the binary number: ";cin>>s;
    int i=0;
	while(i<n)
	{	if(s[i]=='1')
		p->data=1;
		else
		p->data=0;
		p=p->next;

		i++;
	}

}
int main()
{

	dll obj1;

	obj1.create();
	obj1.input();
	obj1.display();
	obj1.cpl1(obj1);
	obj1.cpl2(obj1);
	return 0;
}
