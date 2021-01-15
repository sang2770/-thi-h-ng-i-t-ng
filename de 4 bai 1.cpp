#include<bits/stdc++.h>
using namespace std;
#define ll long long
class day{
	private:
		int n;
		int *a;
	public:
		day()
		{
		n=0;
		a=NULL;
		}
		~day()
		{
			delete[] a;
			}
		void  setn(int c)
		{
			n=c;
			}
		void seta(int *b)
		{
			a=b;
			}
		int getn()
		{
			return n;
			}
		int *geta()
		{
			return a;
			}
		
		friend istream &operator>>(istream &it, day &a);
		friend ostream &operator<<(ostream &it, day &a);
		float TBC()
		{
			float s=0;
			for(int i=0;i<n;i++)
			s+=a[i];
			return s/(float )n;		 
		}
		};
istream &operator>>(istream &it, day &a)
{
  int m;
  int *b;
  it>>m;
  b=new int[m+1];
  a.setn(m);
  for(int i=0;i<m;i++)
   it>>b[i];
  a.seta(b);
  return it;
   }
ostream &operator<<(ostream &it, day &a)
{
	int n;
	int *b;
	n=a.getn();
	b=a.geta();
	for(int i=0;i<n;i++)
	 cout<<b[i]<<" ";
	return it;
	}
   
  			
int main()
{
	day d;
	cin>>d;
	cout<<d;
	
	}



