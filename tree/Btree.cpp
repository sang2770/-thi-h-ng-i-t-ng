#include<bits/stdc++.h>
using namespace std;
#define ll long long
template <class T>
class BTreeNode{
    private:
       T elem ;
	   BTreeNode *parent,*left,*right ;
	public:
	   BTreeNode(){
		  parent = 0 ;
		  left = 0 ;
		  right = 0 ;
		}
		BTreeNode *getParent()
		{	
		return parent;
			}
		BTreeNode *getLeft()
		{return left;}
		BTreeNode *getRight()
		{ return right;}
		void setParent(BTreeNode *p)
		{ parent = p ;}
		void setLeft(BTreeNode *p)
		{ left = p;}
		void setRight(BTreeNode *p)
		{ right = p ; }
		void setElem(T element)
		{ elem = element ; }
		T getElem()
		{ return elem ; }
		int hasLeft()
		{ return left != 0;   }
        int hasRight()
		{ return right != 0; } 
 };
 template <class T>
class BTree {
private:
	BTreeNode<T>* root;
	int n;
public:
    BTree(){ root=0;  n=0;}
	BTreeNode<T>* getRoot(){ return root;}
	int isEmpty(){
        return root==0;
    }           
	int size(){return n;}
	int isInternal(BTreeNode<T>*v){
	   return(v->hasLeft()|| v->hasRight()) ;           
    }
	int isExternal(BTreeNode<T>*v) {
	    return (!v->hasLeft()) && (!v->hasRight()) ;           
	}
	int isRoot(BTreeNode<T>*v){
		return v->getParent()==0;           
	}
	void preOrder(BTreeNode<T>*,void (*visit)(BTreeNode<T>*));
	void inOrder(BTreeNode<T>*,void (*visit)(BTreeNode<T>*));
	void postOrder(BTreeNode<T>*,void (*visit)(BTreeNode<T>*));
	BTreeNode<T>* insert(BTreeNode<T>*,int,T);
	void remove(BTreeNode<T>*);
};
template <class T>
void BTree<T>::inOrder(BTreeNode<T>* v, 
                        void (*visit)(BTreeNode<T>* a)){
	 if(v!=0){
        inOrder(v->getLeft(),visit);
        visit(v);
        inOrder(v->getRight(),visit);
    }
}     
template <class T>
void BTree<T>::postOrder(BTreeNode<T>* v, 
                       void (*visit)(BTreeNode<T>* a)){
     if(v!=0){
         postOrder(v->getLeft(),visit);
         postOrder(v->getRight(),visit);
         visit(v);
     }
}     
template <class T>
void BTree<T>::preOrder(BTreeNode<T>* v,
                       void (*visit)(BTreeNode<T>* a)){
     if(v!=0){
         visit(v);
         preOrder(v->getLeft(),visit);
         preOrder(v->getRight(),visit);
     }
}     
template <class T>
BTreeNode<T>* BTree<T>::insert(BTreeNode<T>* parent, 
                                      int LeftRight,T elem){
     BTreeNode<T>* p = new BTreeNode<T> ;
     p->setParent(parent);
     p->setElem(elem);
     if (parent==0)
        root = p;
     else
        if(LeftRight==1) 
           parent->setRight(p);
        else 
		   parent->setLeft(p);
     n++;
     return p;
}
template <class T>
void BTree<T>::remove(BTreeNode<T>*v){
	  if(v!=0){
		  remove(v->getLeft());
		  remove(v->getRight());
		  BTreeNode<T> *parent = v->getParent();
		  if(parent!=0) {
		  	if(parent->getLeft()==v) parent->setLeft(0);
		  	if(parent->getRight()==v) parent->setRight(0);
		  }
		  if(v==root) root=0;
		  delete v;
		  n--;
		  
     }
}
void pri(BTreeNode<int> *p){
     cout<<p->getElem()<<" ";
}
float t;
void tinhtong(BTreeNode<int> *p){
	t = t + p->getElem();
}	
int main(){	 
	BTree<int> tree;
	BTreeNode<int> *p;
	//Tao cay
	p = tree.insert(NULL,0, 100);
	p = tree.insert(tree.getRoot(),0, 10);
	tree.insert(p,0, 8);
	tree.insert(p,1, 6);
	p = tree.insert(tree.getRoot(),1, 20);
	tree.remove(tree.getRoot());
	//Duyet cay
	cout<<"\n Duyet theo thu tu truoc:";
	tree.preOrder(tree.getRoot(),pri);
	cout<<"\n Duyet theo thu tu giua:";
	tree.inOrder(tree.getRoot(), pri);
	cout<<"\n Duyet theo thu tu sau:";
	tree.postOrder(tree.getRoot(),pri);
	//Tinh tong tat ca cac nut tren cay
	t=0;
	tree.postOrder(tree.getRoot(),tinhtong);
	cout<<"\n Tong cua cac nut tren cay = "<<t;
	return 0;
}


