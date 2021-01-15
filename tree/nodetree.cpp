#include<bits/stdc++.h>
using namespace std;
#define ll long long
template <class T>
class node{
	private:
		T elem;
		node *cha;
		vector<node*>con;
	public:
		node(T o=0, node *father=0)
		{
			elem=o;
			cha=father;
			}
		node *&getcha()
		{
			return cha;
			}
		void setcha(node* father)
		{
			cha=father;
			}
		vector<node*> &getcon()
		{
			return con;
			}
		void insertcon(node *child)
		{
			con.push_back(child);
			}
		T &getelem()
		{
			return elem;
			}
		T setelem(T a)
		{
			elem=a;
			}
		bool ktcon()
		{
			return con.size()>0;
			}
};
//duyet tien thu tu
void preoder(node<int> *Root, string p="\n")
{
	if(Root==0)
	return ;
	cout<<p<<Root->getelem();
	for(auto z:Root->getcon())
	preoder(z, p+"\t");
	}
//duyet hau thu tu
void postoder(node<int> *Root, string p="\n")
{
	if(Root==0)
	return ;
	for(auto z:Root->getcon())
	postoder(z, p+"\t");
	cout<<p<<Root->getelem();
}

//duyet trung thu tu
void inoder(node<int> *Root, string p="\n")
{
	if(Root==0)
	return;
	if(Root->ktcon())
	{
		inoder(Root->getcon()[0], p+"\t");
	}
	cout<<p<<Root->getelem();
	for(int i=1;i<Root->getcon().size();i++)
	inoder(Root->getcon()[i], p+"\t");
}
//duong di tu nut s den nut f
void duongdi(node<int> *s, node<int> *f)
{
	if(s==f)
	cout<<s->getelem()<<" ";
	else
	{
		duongdi(s, f->getcha());
		cout<<f->getelem();
	}
	
	
}
//chieu cao cua cay
int hight(node<int> *Root)
{
	if(Root->getcon().size())
	{
		int max=0;
		for(auto z:Root->getcon())
		{
			int h=hight(z);
			if(max<h)
			max=h;
		}
		return max+1;
	}
	return 0;
}
	
	
	
int main()
{
	node<int> *A=new node<int> (10);
	node<int> *B=new  node<int> (40);
	node<int> *C=new node<int> (20);
	B->setcha(A);
	C->setcha(A);
	A->getcon().push_back(B);
	A->getcon().push_back(C);
	node<int> *D=new node<int>(76);
	D->setcha(C);
	C->getcon().push_back(D);	
	//duyet tien thu tu
	preoder(A);
	cout<<"\n Duong di tu A-B la:";
	duongdi(A, B);
	cout<<"\n Chieu cao cua cay la:";
	cout<<hight(A);
	}

