#include<bits/stdc++.h>
using namespace std;
#define ll long long
class PS{
	private:
		int ts, ms;
	public:
		PS(){
			ts=0;
			ms=1;
		}
        
		PS(int a, int b){
			ts=a;
			ms=b;
		}
		int getts(){
			return ts;
		}
		int getms(){
			return ms;
		}
		void setts(int ts){
		 this->ts=ts;
		  }
		 void setms(int ms){
		 this->ms=ms;
		 }
		friend istream &operator >> (istream &it, PS &p)
        {
        	int t, m;
        	it>>t>>m;
        	p.setts(t);
        	p.setms(m);
        	return it;
		}
		friend ostream &operator << (ostream &it, PS &p)
        {
        	int t, m;
        	
        	t=p.getts();
        	m=p.getms();
        	it<<t<<" "<<m;
        	return it;
		}
};
class listPS{
	private:
		PS *list;
		int n;
	public:
		listPS(){
			n=10;
			list= new PS[n+1];
		}
//		int getN(){
//			return n;	}
//		PS *getlist()
//		{
//			return list;
//		}
		void input();
		void output();
	};
void listPS::input(){
		cin>>n;
		if(n>10) list=new PS[n+1];
		for(int i=0;i<n;i++)
		  cin>>list[i];
		
		
	}
void listPS::output(){
	for(int i=0;i<n;i++)
	cout<<list[i]<<endl;
}
	

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
//  PS p(3, 4);
////  p.setts(1);
//  int ts=p.getts();
//  int ms=p.getms();
//  cout<<ts<<"/"<<ms;

  listPS list;
  list.input();
  list.output();
//  PS p;
//  cin>>p;
//  cout<<p;  return 0;
  
}
