#include<bits/stdc++.h>
using namespace std;
#define ll long long

class hcn{
	private:
		int dai, rong;
	public:
		hcn(){}
		~hcn(){}
		friend istream &operator>>(istream &it, hcn &p);
//		friend ostream &operator<<(ostream &it, hcn &p);
   
    int dt()
    {
    	return dai*rong;
    	}
    void setdai(int dai)
    	{
    		this->dai=dai;
    		}
    void setrong(int rong)
    	{
    		this->rong=rong;
    		}
		
};
istream &operator>>(istream &it, hcn &p)
 {
 	int a, b;
 	cin>>a>>b;
 	p.setdai(a);
 	p.setrong(b);
 	return it;
 	}
//bool ss(hcn a, hcn b)
//{
//	return a.dt()>b.dt();
//	}
 int max1=0;
class List{
    private:
		int n;
		hcn *a;
		
	public:	
	List()
	{
		n=0;
		a=new hcn[n+1];
//		mã=0;
		}
	~List()
		{   delete[] a;}
		void input()
		{
			cin>>n;
			a=new hcn[n+1];
			for(int i=0;i<n;i++)
			 {
			   cin>>a[i];
			 if(max1<a[i].dt())
			    max1=a[i].dt();
			  }
			 }
		int max();
	
};
int List::max()
{
	for(int i=0;i<n;i++)
	 if(max1==a[i].dt())
	  cout<<i+1<<endl;
	  }

int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
List a;
a.input();
a.max();
//int n;
//cin>>n;
//hcn a[n+1];
//for(int i=0;i<n;i++)
// cin>>a[i];
//sort(a, a+n, ss);
//int max=a[0].dt();
//cout<<1<<endl;
//for(int i=1;i<n;i++)
// if(max==a[i].dt())
//  cout<<i+1<<endl;

}

