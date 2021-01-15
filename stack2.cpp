#include<bits/stdc++.h>
using namespace std;
#define ll long long
template<class T>
class Stack{
	private:
		unsigned num, cap;
		T *curr;
	public:
		Stack()
		{
			num=cap=0;
			curr=NULL;
			}
		~Stack()
		{
			delete[] curr;
			}
		void reserve(unsigned newcap)
		{
			if(cap>newcap)
			return ;
			cap=newcap;
			T *temp=new T [cap+1];
			for(int i=0;i<num;i++)
			temp[i]=curr[i];
			if(curr!=NULL)
			delete[] curr;
			curr=temp;
			}
		bool empty()
		{
			return num=0;
			}
		T size()
		{
			return num;
			}
		void push(T x)
		{
			if(num==cap)
			reserve(cap*2+2);
			curr[num++]=x;
			}
		void pop()
		{
			if(num!=0)
			num--;
			}
		T &top()
		{
//			cout<<curr[num-1];
			return curr[num-1];
			}		
};
int main()
{
	Stack<int> a;
	a.push(2);
	cout<<a.top();
	cout<<a.size();

	}

