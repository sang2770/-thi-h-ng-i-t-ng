#include<bits/stdc++.h>
using namespace std;
#define ll long long
class matran{
	private:
		int n;
		int **a;
	public:
		matran(){};
		~matran(){
			delete[] a;
			}
		friend istream &operator >>(istream &it, matran &p);
		friend ostream &operator <<(ostream &it, matran &p);
		friend cong(matran a, matran b);
		void setmang(int **b)
		{
			a=b;
		}
		void setn(int b)
		{
		  n=b;
		}
				
};
istream &operator >>(istream &it, matran &p)
{
	int **b;
	int n;
	cout<<"nhap hang, cot:";
	it>>n;
//    b = (int **)malloc(n * sizeof(int *));
//    for (int i = 0; i < n; i++)
//   {
//    b[i] = (int *)malloc(n * sizeof(int));
//   }
    b=new int*[n];
    for(int i=0;i<n;i++)
     b[i]=new int[n];
	cout<<"Nhap ma tran:";
	for(int i=0;i<n;i++)
	  for(int j=0;j<n;j++)
	   it>>b[i][j];
	p.setn(n);
	p.setmang(b);
	return it;
	}
ostream &operator <<(ostream &it, matran &p)	
{
	cout<<"Ma tran vua nhap la:";
	for(int i=0;i<p.n;i++)
	{
	  for(int j=0;j<p.n;j++)
	     it<<p.a[i][j];
	   it<<"\n";
	   }
	   }
	
int main()
{
	matran a;
	cin>>a;
	cout<<a;
	}


