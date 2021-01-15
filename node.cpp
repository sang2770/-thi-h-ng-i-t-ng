#include<bits/stdc++.h>
#ifndef __node__cpp__
#define __node__cpp__
using namespace std;
#define ll long long
template<class T>
class node{
	private:
		T elem;// gia tri cua node
		node<T> *next;//chua diai chi node tiep theo
	public:
		node<T>(){
			next=NULL;//hamtao k doi
		}
		node<T>(T x, node<T> *N=0){//ham tao co doi
			elem=x;
			next=N;
		}
		T &getelem(){return elem;

		}
		void setelem(T x)
		{
			elem=x;
		}
		node<T> *&getnext(){return next;
		}
		void setnext(node<T> *N) {next=N;
		}
};
#endif
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
    node<int> N;
    N.getelem()=2;
    node<int> *A=new node<int>(7, &N);
    node<int> *B=new node<int>(6);
    N.setnext(B);
    for(node<int> *p=A;p!=0;p=p->getnext())
     cout<<p->getelem()<<" ";
}
     

