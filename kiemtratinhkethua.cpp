#include<bits/stdc++.h>
using namespace std;
#define ll long long
class base{
	public:
		base()
		{
			cout<<"S�ng dep zai";
			}
		~base()
		{
			cout<<"Sang r�t dep zai";
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
	


