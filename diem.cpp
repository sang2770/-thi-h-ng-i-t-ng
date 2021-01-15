#include<bits/stdc++.h>
using namespace std;
#define ll long long
class diem
{
	private:
		int hd, td;
		int vt;
	public:
		diem()
		{
		}
		~diem()
		{hd=0;
		td=0;
		}
		friend istream &operator>>(istream &it, diem &p)
		{
			it>>p.hd>>p.td;
			return it;
		}
		friend ostream &operator<<(ostream &it, diem &p)
		{
			it<<"("<<p.hd<<";"<<p.td<<")"<<endl;
			return it;
		}
		float kc()
		{
			float res=sqrt(hd*hd+td*td);
			return res;
		}
		
};
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
    int n;
    cin>>n;
    float b[n+1], res=0;
    
    diem a[n+1];
    for(int i=0;i<n;i++)
     {
	 cin>>a[i];
     b[i]=a[i].kc();
     res+=b[i];
    }
//    sort(b, b+n);
    cout<<"Tong long cach la:"<<setprecision(2)<<fixed<<res<<endl;
    cout<<"Diem gan nhat la:";
    float min=b[0];
    int vtmin=0;
    for(int i=0;i<n;i++)
     if(min>b[i])
       {
       	min=b[i];
       	vtmin=i;
	   }
	cout<<vtmin+1;
}
    
    
    
  

