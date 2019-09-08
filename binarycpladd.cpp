#include<iostream>
#include<cstring>
using namespace std;
class node
{public:
	int data;
	node *next,*prev;
};
int flag_for_first_time=0;
class dll
{public:
node *head1,*tail1;
	int n;

    void add(dll obj,dll sum);
	void create();
	void input();

	void cpl1(dll);
	void cpl2(dll,dll,dll);

};
////////////////////////////////////add///////////////////////////////////////////////////////
void dll::add(dll obj,dll sum)
{
    node *ptr;
	sum.head1=new node;
	ptr=sum.head1;
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
	}
	p->next=NULL;
	sum.tail1=p;

    node*t1,*t2,*s;
    t1=this->tail1;
    t2=obj.tail1;
    s=sum.tail1;

    int carry=0;
 i=n;
while(i>0)
  {if((t1->data)==1 && (t2->data)==1)
    {
        if(carry==0)
        {s->data=0;
         carry=1;
        }
        else
        {s->data=1;
         carry=1;
        }

    }
    else if(t1->data==0 && t2->data==0)
    {
        s->data=(carry);
    }
    else
    {if(carry==1)
        {s->data=0;
         carry=1;
        }
     if(carry==0)
     {s->data=1;
      carry=0;
     }
    }
    s=s->prev;
    t1=t1->prev;
    t2=t2->prev;
    i--;
  }
  s=sum.head1;
cout<<"\n\tthe number is: ";
  i=0;
  while(i<n)
    {cout<<s->data;
        s=s->next;
        i++;
    }
cout<<"\n\tCarry="<<carry;
}
//////////////////////////////////////////////////////twos complement///////////////////////////////////////////////
void dll::cpl2(dll compl2,dll compl1,dll csum)
{node *tobc=this->head1;


    node *ptrc;

	compl1.head1=new node;
	ptrc=compl1.head1;
	node *qc,*pc;
	pc=qc=ptrc;
	int i=1;
	while(i<n)
	{
		pc->next=new node;
		pc=pc->next;
		pc->prev=qc;
		qc=qc->next;
		i++;
	}
	pc->next=NULL;
	compl1.tail1=pc;
cout<<"\n\t1's complement is: ";
i=0;
while(i<n)
{
    if(tobc->data==1)
    {
        ptrc->data=0;
        cout<<ptrc->data;
        ptrc=ptrc->next;
    }
    else
    {
        ptrc->data=1;
        cout<<ptrc->data;
        ptrc=ptrc->next;
    }
    i++;
    tobc=tobc->next;

}


    compl2.head1=new node;
	node *q,*p;
	p=q=compl2.head1;
	p->data=0;
i=1;
	while(i<n)
	{
		p->next=new node;
		p->data=0;
		p=p->next;
		p->prev=q;
		q=q->next;
		i++;
	}
	p->data=1;
	p->next=NULL;
	compl2.tail1=p;
cout<<"\n\t2's Complement is ";

    node *sptr;
	csum.head1=new node;
	sptr=csum.head1;
	node *sq,*sp;
	sp=sq=sptr;
 i=1;
	while(i<n)
	{
		sp->next=new node;
		sp=sp->next;
		sp->prev=sq;
		sq=sq->next;
		i++;
	}
	sp->next=NULL;
	csum.tail1=sp;

    node *t1,*t2,*s;
    t1=compl1.tail1;
    t2=compl2.tail1;
    s=csum.tail1;

    int carry=0;
 i=n;
while(i>0)
  {if((t1->data)==1 && (t2->data)==1)
    {
        if(carry==0)
        {s->data=0;
         carry=1;
        }
        else
        {s->data=1;
         carry=1;
        }

    }
    else if(t1->data==0 && t2->data==0)
    {
        s->data=(carry);
    }
    else
    {if(carry==1)
        {s->data=0;
         carry=1;
        }
     else
     {s->data=1;
      carry=0;
     }
    }
    s=s->prev;
    t1=t1->prev;
    t2=t2->prev;
    i--;
  }
  s=csum.head1;
  i=0;
  while(i<n)
    {cout<<s->data;
        s=s->next;
        i++;
    }
cout<<"\n\tCarry="<<carry;



}
/////////////////////////////////////////////////ones complement///////////////////////////////
void dll::cpl1(dll compl1)
{
     node *tob=this->head1;


    node *ptr;

	compl1.head1=new node;
	ptr=compl1.head1;
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
	}
	p->next=NULL;
	compl1.tail1=p;
cout<<"\n\t1's complement is: ";
i=0;
while(i<n)
{
    if(tob->data==1)
    {
        ptr->data=0;
        cout<<ptr->data;
        ptr=ptr->next;
    }
    else
    {
        ptr->data=1;
        cout<<ptr->data;
        ptr=ptr->next;
    }
    i++;
    tob=tob->next;

}


}

//////////////////////////////////////////////////create/////////////////////////////////////////////////
void dll::create()
{   //if(flag_for_first_time==0)
    cout<<"\n\tenter the length of binary number: ";
	 cin>>n;

    //else
      //  n=n;

	node *ptr;

	this->head1=new node;
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
	}
	p->next=NULL;
	tail1=p;
 //   flag_for_first_time=1;
}

///////////////////////////////////////////////////////input//////////////////////////////////////////////////
void dll::input()
{node *ptr;
	ptr=this->head1;
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
node *t=head1;
i=0;
cout<<"\n\tThe number is: ";
while(i<n)
{
	cout<<t->data;
	t=t->next;
i++;
}
cout<<"\n\t";
}
//////////////////////////////////////////main///////////////////////////////////////////////////////////
int main()
{

	dll obj1,obj2,compl1,compl2,sum,csum;

	obj1.create();
	obj1.input();

    //obj1.cpl1(compl1);
    obj1.cpl2(compl2,compl1,csum);
flag_for_first_time=0;
	obj2.create();
	obj2.input();
	//obj2.cpl1(obj2);
	//obj2.cpl2(obj2);

cout<<"\nSum of ";
	obj1.add(obj2,sum);
	return 0;
}
