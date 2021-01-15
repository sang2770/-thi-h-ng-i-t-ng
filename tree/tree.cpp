#include<bits/stdc++.h>
using namespace std;
#define ll long long
template<class T>
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
template<class T>
class Tree{
	private:
		node<T> *root;
		int n;
	public:
		Tree()
		{
			root=NULL;
			n=0;
			
		}
		node<T> *&getroot()
		{
			return root;
		}
		int Empty()
		{
			return root=NULL;
		}
		int size()
		{
			return n;
		}
		//duyet tirn thu tu
		void preoder(node<T> *Root, string p="\n")
		{
			if(Root==0)
			return ;
			cout<<p<<Root->getelem();
			for(auto z:Root->getcon())
			preoder(z, p+"\t");
		}
		//duyet hau thu tu
		void postoder(node<T> *Root, string p="\n")
		{
			if(Root==0)
			return ;
			
			for(auto z:Root->getcon())
			preoder(z, p+"\t");
			cout<<p<<Root->getelem();
		}
		//duyrt trung thu tu
		void inoder(node<T> *Root, string p="\n")
		{
			if(Root==0)
			return ;
			if(Root->ktcon())
			inoder(Root->getcon()[0], p+"\t");
			cout<<p<<Root->getelem();
			for(T i=1;i<Root->getcon().size();i++)
			inoder(Root->getcon()[i], p+"\t");
		}
		
		//duong di tu s den f
		void duongdi(node<T> *s, node<T> *f)
		{
			if(s==f)
			cout<<s->getelem();
			else
			{
				duongdi(s, f->getcha());
				cout<<f->getelem()<<" ";
				
					}		}
		//chieu cao cua cay
		int chieucao(node<T> *Root)
		{
			if(Root->getcon().size())
			{
				int max=0;
				for(auto z:Root->getcon())
				{
				int h=chieucao(z);
				if(max<h)
				max=h;
			    }
			    return max+1;
				
			}
			return 0;
		}
		//them mot nut vao cay
	    node<T> *insert(node<T> *parent, T elem)
	    {
	    	node<T> *p=new node<T>;
	    	p->setcha(parent);
	    	p->setelem(elem);
	    	if(parent==NULL)
	    	root=p;
	    	else
	    	parent->insertcon(p);
	    	return p;
		}
		//xoa mot nut
	void remove(node<T> *v)
	{
		if(v!=NULL)
		{
		  for(auto z:v->getcon())
		  remove(z);
		  if(v->ktcon())
		  v->getcon().clear();
		  node<T> *parent=v->getcha();
		  if(parent!=NULL)
		  {
		  	for(auto z= parent->getcon().begin();z!=parent->getcon().end();z++)
		  	 if(*z==v)
		  	{ 
			parent->getcon().erase(z);
		  	break;
			  }
			  	
		}
		delete v;
	}
}

		
};	

int main()
{
	Tree<int > a;
	node<int> *p;
	//tao cay
	a.insert(NULL, 100);
	node<int> *q;
	p=a.insert(a.getroot(), 20);
	q=a.insert(a.getroot(), 30);
	node<int> *r;
	r=a.insert(p, 8);
	a.insert(p, 6);
	a.insert(q,30);
	a.remove(q);
    a.inoder(a.getroot());
	return 0;
	
}

