#include<bits/stdc++.h>
using namespace std;
#define ll long long
template <class T>
class node{
	private:
		T elem;
		node<T> *left, *right;
	public:
		node()
		{
			elem =0;
			left=right=NULL;
		}
		node *getleft()
		{
			return left;
		}
		node *getright()
		{
			return right;
		}
		T getelem()
	    {
	    	return elem;
		}

		void setelem(T a)
		{
			elem=a;
		}
		void setleft(node<T>* p)
		{
			left=p;
		}
		void setright(node<T>* p)
		{
			right=p;
		}
		
		
};
template<class T>
class BTS{
	private:
		node<T> *root;
		int n;
	public:
		BTS()
		{
			root=0;
			n=0;
		}
		node<T> *getroot()
		{
			return root;
		}
		int size()
		{
			return n;
		}
		int empty()
		{
			return root==0;
		}
		void Free(node<T> *Root)
		{
			if(Root==NULL)
			return;
			Free(Root->getleft());
			Free(Root->getright());
			free(Root);
		}
		//lay gia tri cay con trai nhat
		T trainhat(node<T> *Root)
		{
			while(Root->getleft()!=NULL)
			Root=Root->getleft();
			return Root->getelem();
		}
		
		T leftof(T elem, node<T> *Root)
		{
			return elem <Root->getelem();
		}
		T rightof(T elem, node<T> *Root)
		{
			return elem>Root->getelem();
		}
		node<T>* insert(node<T> *Root, int elem )
		{
			if(Root==NULL)
			{
				node<T> *p=new node<T>;
				p->setleft(0);
				p->setright(0);
				p->setelem(elem);
				return p;
			}
			if(leftof(elem, Root))
			 Root->setleft(insert(Root->getleft(), elem));
			else if(rightof(elem, Root))
			 Root->setright(insert(Root->getright(), elem));
			 return Root;
		}
		//duyet tien thu tu
		void preoder(node<T> *Root, string p="\n")
		{
			if(Root!=NULL)
			{
			
			cout<<p<<Root->getelem();
			preoder(Root->getleft(), p+"\t");
			preoder(Root->getright(), p+"\t");
		}
	    }
	    //duyet hau thu tu
	    void postoder(node<T> *Root, string p="\n")
	    {
	    	if(Root!=NULL)
	    	{
	    		postoder(Root->getleft(), p+"\t");
	    		postoder(Root->getright(), p+"\t");
	    		cout<<p<<Root->getelem();
			}
		}
		//duyet trung thu tu
		void inoder(node<T> *Root, string p="\n")
		{
			if(Root!=NULL)
			{
				inoder(Root->getleft(), p+"\t");
				cout<<p<<Root->getelem();
				inoder(Root->getright(), p+"\t");
							}
		    }
		bool search(node<T> *Root, T elem)
		{
			if(Root==NULL)
			return false;
			if(Root->getelem()==elem)
			return true;
			else if(leftof(elem, Root))
			{
				return search(Root->getleft(), elem);
			}
			else if(rightof(elem, Root))
			{
				return search(Root->getright(), elem);
			}
		}
		node<T> *Delete(node<T> *Root, int elem)
		{
			if(Root==NULL)
			return Root;
			if(leftof(elem, Root))
			Root->setleft(Delete(Root->getleft(), elem));
			else if(rightof(elem, Root))
			Root->setright(Delete(Root->getright(), elem));
			else
			{
				if(Root->getleft()==NULL)
				{
					node<T> *p= Root->getright();
					free(Root);
					return p;
					}
				if(Root->getright()==NULL)
				{
				     node<T> *p= Root->getleft();
					free(Root);
					return p;
					}
				Root->setelem(trainhat(Root->getright()));
				Root->setright(Delete(Root->getright(), Root->getelem()));
				
				}
			return Root;
			}
					
		};
int main()
{
	BTS<int> tree;
	node<int> *p;
	p=tree.insert(0, 10);
	p=tree.insert(p, 20);
	p=tree.insert(p, 40);
	p=tree.insert(p, 14);
	p=tree.insert(p, 18);
	cout<<"Duyet tie thu tu";
	tree.preoder(p);
	cout<<"\nduyet trung thu tu:\n";
	tree.inoder(p);
	cout<<"\nDuyet hau thu tu:\n";
	tree.postoder(p);
	
	cout<<"\nkiem tra xem co phan tu 40 :";
	if(tree.search(p, 50)==true)
	cout<<"Co";
	else
	cout<<"Khong";
	cout<<"\nXoa node 40  khoi cay\n";
	p=tree.Delete(p,18);
	cout<<"cay sau khi xoa la:";
	tree.preoder(p);
	
	
	
}


		

