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
class binary{
	private:
		int num;
		node<T> * root;
	public:
		node<T> *&getroot()
		{
			return root;
		}
		void Free(node<T> *Root)
		{
			if(Root==NULL)
			return;
			Free(Root->getleft());
			Free(Root->getright());
			free(Root);
		}
		bool leftof(node<T> *Root, T elem)
		{
			return  elem<Root->getelem();
		}
		bool rightof(node<T> *Root, T elem)
		{
			return elem>Root->getelem();
		}
		T trainhat(node<T> *Root)
		{
			while(Root->getleft()!=NULL)
			Root=Root->getleft();
			return Root->getelem();
		}
		bool Search(node<T> *Root, T elem)
		{
			if(Root==NULL)
			return false;
			if(Root->getelem()==elem)
			return true;
			else if(leftof(Root, elem))
			return Search(Root->getleft(), elem);
			else if(rightof(Root, elem))
			return Search(Root->getright(), elem);
			}
		node<T> *insert(node<T> *Root, T elem)
		{
			if(Root==NULL)
			{
				node<T> *p;
				p->setelem(elem);
				p->setleft(0);
				p->setright(0);
				return p;
				}
			if(leftof(Root, elem))
			Root->setleft(insert(Root->getleft(), elem));
			else if(rightof(Root, elem))
			Root->setright(insert(Root->getright(), elem));
			return Root;
			}
		node<T> *Delete(node<T> *Root, T elem)
		{
			if(Root==NULL)
			return Root;
			if(leftof(Root, elem))
			Root->setleft(Delete(Root->getleft(), elem));
			if(rightof(Root, elem))
			Root->setright(Delete(Root->getright(), elem));
			else
			{
				if(Root->geleft()==NULL)
				{
					node<T> *p=Root->getright();
					free(Root);
					return p;
					}
				if(Root->gelright()==NULL)
				{
					node<T> *p=Root->getleft();
					free(Root);
					return p;
					}
				Root->setelem(trainhat(Root->getright()));
				Root->setright(Delete(Root->getright(), Root->getelem()));
				return Root;
				}
				}
						
		
};
int main()
{
	}

