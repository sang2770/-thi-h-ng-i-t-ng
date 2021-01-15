#include<bits/stdc++.h>
#ifndef __dslk__cpp__
#define __dslk__cpp__
using namespace std;
#define ll long long
template <class T>
class node{
	private:
		int elem;
		node<T> *next;
	public:
		node<T> ()
		{
			next=NULL;
			}
		node<T>(T x, node<T> *N=0)
		{
			elem=x;
			next=N;
			}
		T &getelem()
		{
			return elem;
			}
		node<T> *&getnext()
		{
			return next;
			}
		void setelem(T x)
		{
			elem=x;
			}
		void setnext(node<T> *N)
		{
			next=N;
			}
		
			
};
template<class T>
class iterators{
	private:
		node<T> *curr;
	public:
		iterators(node<T> *c=0)
		{
			curr=c;
			}
		node<T> *&getcurr()
		{
			return curr;
			}
		T operator*()
		{
			return curr->getelem();
			}
		bool operator!=(iterators<T> it)
		{
			return curr!=it;
			}
		iterators<T> operator++(int)
		{
			return curr->getnext();
			}
		iterators<T> operator++()
		{
			iterators<T> it=curr;
			curr=curr->getnext();
			return it;
			}
			
};
template<class T>
class slist{
	private:
		node<T> *head, *trail;
		int num;
	public:
		slist(){
			head=trail=NULL;
			num=0;
			}
		node<T> *&gethead()
		{
			return head;
			}
		node<T> *gettrail()
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
		T front()
		{
			return head->getelem();
			}
		T back()
		{
			return trail->getelem();
			}
		void push_back(T x)
		{
			if(num==0)
			head=trail=new node<T>(x);
			else
			{
				trail->setnext(new node<T> (x));
				trail=trail->getnext();
				}
			num++;
			}
		void push_front(T x)
		{
			if(num==0)
			head=trail=NULL;
			else
			head=head->setnext(x, head);
			num++;
		}
		void pop_front()
		{
			if(num==0)
			return;
			if(num==1)
			return head=trail=NULL;
			else 
			head=head->getnext();
			num--;
		}
		void pop_back()
		{
			if(num==0)
			return ;
			else if(num==1)
			return head=trail=NULL;
			else 
			{
				node<T> *p=head;
				while(p->getnext()!=trail)
				p=p.getnext();
				p.setnext(0);
		}
		num--;
		}
		typedef iterators<T> inte;
		inte begin()
		{
			return head;
			}
		inte end()
		{
			return trail;
			}
	
	
					};		

#endif	
//int main()
//{
//	slist<int> a;
//	a.push_back(1);
//	a.push_back(2);
//	cout<<a.front();
//	cout<<a.back();
//	a.pop_back();	
//	}


