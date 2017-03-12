#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		bool f1,f2,f3;
		f1=f2=f3=false;
		int marks=0,temp;
		LOOP(i,N)
		{
			cin>>temp;
			marks+=temp;
			if(temp == 5)
				f2=true;
			if(temp < 3)
				f1=true;
		}
		float ave=(float)marks/N;
		if(ave < 4.0)
			f3=true;
		if(f1 == false && f2 == true && f3 == false)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

