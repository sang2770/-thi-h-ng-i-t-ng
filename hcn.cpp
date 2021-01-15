#include<bits/stdc++.h>
using namespace std;
#define ll long long

class hcn{
	private:
		int dai, rong;
	public:
		hcn(){ dai=0;rong=0;}
		~hcn(){dai=0;rong=0;}
		friend istream &operator>>(istream &it, hcn &p);
//		friend ostream &operator<<(ostream &it, hcn &p);
   
    int dt()
    {
    	return dai*rong;
    	}
		
};
istream &operator>>(istream &it, hcn &p)
 {
 	it>>p.dai>>p.rong;
 	return it;
 	}
bool ss(hcn a, hcn b)
{
	return a.dt()>b.dt();
	}
//class List{
//    private:
//		int n;
//		hcn *a;
//		int dt=0;
//	public:
//		list()
//		{
//			}
//			
//		~List()
//		{   delete a;}
//		void input()
//		{
//			cin>>n;
//			a=new hcn[n+1];
//			for(int i=0;i<n;i++)
//			 {cin>>a[i];
//			 if(dt<a[i].dt())
//			 dt=a[i].dt();
//			  }
//			 }
//		int max();
//		
//};
//int List::max()
//{
//	for(int i=0;i<n;i++)
//	 if(dt==a[i].dt())
//	  cout<<i+1<<endl;
//	  }

int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
//List a;
//a.input();
//a.max();
int n;
cin>>n;
hcn a[n+1];
for(int i=0;i<n;i++)
 cin>>a[i];
sort(a, a+n, ss);
int max=a[0].dt();
cout<<1<<endl;
for(int i=1;i<n;i++)
 if(max==a[i].dt())
  cout<<i+1<<endl;

}

