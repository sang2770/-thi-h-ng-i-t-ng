#include<bits/stdc++.h>
using namespace std;
#define ll long long
template<class T>
class Stack{
	unsigned cap, num;
	T *buff;
	public:
		Stack()
		{
			cap=num=0;
			buff=NULL;
		}
		void reserve(unsigned newcap)
		{
			if(newcap<cap) return;
			cap = newcap;
			T *temp=new T[cap];
			for(int i=0;i<num;i++)
			  temp[i]=buff[i];
			if(buff!=NULL) delete[] buff;
			buff=temp;
		}
		int size()
		{
			return num;
		}
		bool empty(){return num==0;
		}
		T &top()
		{
			return buff[num-1];
		}
		void pop()
		{
			if(num) num--;
			
		}
		void push(T x)
		{
			if(cap==num)
			reserve(cap*2+2);
			buff[num++]=x;
		}
		
};
int menu()
{
	int chon;
	cout<<"Chuong trinh quan li stack\n";
	cout<<"\n1.them mot phan tu vao stack:";
	cout<<"\n2.lay mot phan tu khoi stack";
	cout<<"\n3.cho biet stack co rong k";
	cout<<"\n4.ket thuc chuong trinh";
	cout<<"\n moi ban chon:(1, 2, 3, 0):";
	cin>>chon;
	return chon;
}
int main()
{
	Stack<int> a;
//	a.push(1);
//	cout<<a.top();
//	cout<<a.size();
	int chon;
	while(chon=menu()){
	switch(chon)
		{
		case 1:
			cout<<"nhap phan tu:";
			int x;
			cin>>x;
			a.push(x);
			cout<<"Ban da them vao stack thanh cong\n";
			break;
		case 2:
			cout<<"\n phan tu dc lay la:"<<a.top();
			a.pop();
			break;
		case 3:
			if(a.empty()==0)
			cout<<"\n satck rong";
			else
			cout<<"\n stack da co phan tu!";
			break;
		default:
			break;
	}  
	}
	
}
	


