#include<bits/stdc++.h>
using namespace std;
#define ll long long
class base{
	public:
		base()
		{
			cout<<"Sáng dep zai";
			}
		~base()
		{
			cout<<"Sang rât dep zai";
			}
		
};
class device:public base{
	public:
		device()
		{
			cout<<"sang";
			}
		~device()
		{
			cout<<"Sangadc";
			}
};
int main()
{
	device a;
	}
	


