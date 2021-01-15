#include<bits/stdc++.h>
using namespace std;
#define ll long long
template<class T>
class node{
	private:
	  T elem;
	  node<T> *next;
	public:
	node()
	  {
	  	elem=0;
	  	next=NULL;
	  	}
	node(T x, node<T> *N=0)
	{
		elem=x;
		next=N;
		}
	T &getelem()
	{
		return elem;
		}
	void setelem(T x)
	{
		elem=x;
		}
	node<T> *&getnext()
	{
		return next;
		}
	void setnext(node<T>*N)
	{
		next=N;
		}
		};
template<class T>
class Slist{
	private:
		node<T> *head, *trail;
		unsigned num;
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
		bool empty()
		{
			return num=0;
			}
		unsigned size()
		{
			return num;
			}
		void push_back(T x)
		{
			if(num==0)
			head=trail=new node<T> (x);
			else
			{
				trail=new node<T> (x);
//				trail=trail->getnext();
				}
			num++;
		}
		void push_front(T x)
		{
			if(num==0)
			head=trail=new node<T>(x);
			else
			{
				head=new node<T> (x, head);
//				head=head->getnext();
				}
			num++;
			}
		T &back()
		{
			return trail->getelem();
			}
		T &front()
		{
			return head->getelem();
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
			head=trail=0;
			else
			{
				node<T> *p=head;
				while(p->getnext()!=trail)
				p=p->getnext();
				p->setnext(0);
				trail=p;
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
	cout<<a.front();
	cout<<a.size();
	
}

