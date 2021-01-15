#include<bits/stdc++.h>
using namespace std;
#define ll long long
template<class T>
class node{
	private:
		int elem;
		node<T> *next;
	public:
		node()
		{ next=NULL;}
		node(T x, node<T> *N=0)
		{
			elem=x;
			next=N;
			}
		node<T> *&getnext()
		{
			return next;
			}
		T &getelem()
		{
			return elem;
			}
		void setnext(node<T> *N)
		{
			next=N;
			}
		void setelem(T x)
		{
			elem=x;
			}
	};
template<class T>
class Slist{
	private:
		int num;
		node<T> *head, *trail;
	public:
		Slist()
		{
			num=0;
			head=trail=NULL;
			}
		node<T> *&gethead()
		{
			return head;
			}
		node<T> *&gettrail()
		{
			return trail;
			}
		int size()
		{
			return num;
			}
		bool empty()
		{
			return num=0;
			}
		
		void push_back(T x)
		{
			if(num==0)
			head=trail=new node<T> (x);
			else{
				trail->setnext(new node<T>(x));
				trail=trail->getnext();
			}
			num++;
			}
		T front()
		{
			return head->getelem();
			}
		T back()
		{
			return trail->getelem();
			}
		void push_front(T x)
		{
			if(num==0)
			 head=trail=new node<T>(x);
			else
			{
				head->setnext(new node<T>(x, head));
				head=head->getnext();
			}
			num++;
			}
		void pop_front()
		{
			if(num==0)
			return;
			if(num==1)
			head=trail=NULL;
			else
			{
				head=head->getnext();
				}
			num--;
			}
		
			
		void pop_back()
		{
			if(num==0)
			 return;
			if(num==1)
			head=trail=NULL;
			else
			{
				node<T> *p=head;
				while(p->getnext()!=trail)
				{
					p=p->getnext();
					}
				p->setnext(0);
				}
			num--;
			}
		
				  			
			
		
			
};
int main()
{
	Slist<int> a;
	a.push_back(1);
	a.push_front(2);
	a.pop_back();
	a.push_front(1);
	
	cout<<a.back();
	}


