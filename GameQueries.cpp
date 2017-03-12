#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int main()
{
	int N;
	cin>>N;
	vector<LL>a;
	vector<LL>b;
	LL temp;
	LOOP(i,N)
	{
		cin>>temp;
		a.PB(temp);
	}
	int Q;
	LL d;
	cin>>Q;
	LOOP(i,Q)
	{
		b=a;
		cin>>d;
		b[d-1]=0;
		int x=0,y=0;
		for(int i=0;i<N;i++)
		{
			if(b[i]>1)
				y++;
			if(b[i]==1)
				x++;
		}
		if(y & 1)
		{
			if(x & 1)
				cout<<"First\n";
			else
				cout<<"Second\n";
		}
		else
		{
			if(x & 1)
				cout<<"First\n";
			else
				cout<<"Second\n";
		}
	}
	return 0;
}

