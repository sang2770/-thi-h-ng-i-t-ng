#include<bits/stdc++.h>
using namespace std;
#define ll long long
class base{
	public:
		virtual void cin(){
		cout<<"lop ao;";
		}
		void show()
		{
			cout<<"Show class;"<<endl;
			}
		
};
class deviced: public base{
	public:
		void cin(){
		cout<<"hma lop ke thua;"<<endl;}
		void show()
		{
			cout<<"Show ke thua:"<<endl;}
			
};
int main()
{
   base *bptr;
    deviced d;
    bptr = &d;
 
    bptr->cin();
    bptr->show();

    return 0;
    }

