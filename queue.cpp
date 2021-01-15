#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Queue{
	private:
		unsigned N, num,F, L;
		T *buff;
	public:
		Queue()
		{
			num=N=F=L=0;
			buff=NULL;
			
		}
		~Queue()
		{
			delete[] buff;
		}
		unsigned size()
		{
			return num;
		}
		void resever(T newcap)
		{
			if(newcap<N) return 
			N=newcap;
			T *temp=new T[]
		}
		
};
int main()
{


