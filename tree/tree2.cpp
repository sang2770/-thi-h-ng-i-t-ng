#include<bits/stdc++.h>
using namespace std;
#define ll long long
template <class T>
class Node{
	private:
		T elem;
		Node *cha;
		vector<Node*> con;
	public:
		Node(T a=0, Node *parent=0)
		{
			elem=a;
			cha=parent;
		}
		void setcha(Node *p)
		{
			cha=p;
		}
		Node *&getcha()
		{
			return cha;
		}
		void setelem(T a)
		{
			elem=a;
		}
		T getelem()
		{
			return elem;
		}
		void setcon(Node *child)
		{
			con.push_back(child);
		}
		vector<Node*> &getcon()
		{
			return con;
		}
		bool ktcon()
		{
			return con.size()>0;
		}
		
};
//duyet cay
//duyet tien thu tu
void preoder(Node<int> *root, string p="\n")
{
	if(root==0)
	return ;
	cout<<p<<root->getelem();
	for(auto z:root->getcon())
	 preoder(z, p+"\t");
}
//duyet hau thu tu
void postoder(Node<int> *root, string p="\n")
{
	if(root==0)
	return ;
	for(auto z:root->getcon())
	 postoder(z, p+"\t");
	cout<<p<<root->getelem();
}
//duyr trung thu tu
void inoder(Node<int> *root, string p="\n")
{
	if(root==0)
	return;
	if(root->ktcon())
	{
		inoder(root->getcon()[0], p+"\t");
	}
	cout<<p<<root->getelem();
	for(int i=1;i<root->getcon().size();i++)
	 inoder(root->getcon()[i],p+"\t" );
}
//tim duong di tu s den f
void duongdi(Node<int> *s, Node<int> *f)
{
	if(s==f)
	cout<<s->getelem()<<" ";
	else
	{
		duongdi(s, f->getcha());
		cout<<f->getelem()<<" ";
	}
}
//tim chieu cao cay
int high(Node<int> *root)
{
	if(root->getcon().size())
	{
		int max=0;
		for(auto z:root->getcon())
		{
		int h=high(z);
		if(max<h)
		max=h;
	    }
	    return max+1;
	}
	return 0;
		
	
	
}
int main()
{
	Node<int> *A=new Node<int> (10);
	Node<int> *B=new  Node<int> (40);
	Node<int> *C=new Node<int> (20);
	B->setcha(A);
	C->setcha(A);
	A->getcon().push_back(B);
	A->getcon().push_back(C);
	Node<int> *D=new Node<int>(76);
	D->setcha(C);
	C->getcon().push_back(D);	
	//duyet tien thu tu
	preoder(A);
	cout<<"\n Duong di tu A-B la:";
	duongdi(A, B);
	cout<<"\n Chieu cao cua cay la:";
	cout<<high(A);
}

