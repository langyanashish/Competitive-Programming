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
		int n;
		cin>>n;
		int m;
		int r = n % 8;
		if(r==0)
			m=8;
		else
			m=r;
		switch(m)
		{
			case 1:
			case 2:
			case 3:
				cout<<n+3;
				break;
			case 4:
			case 5:
			case 6:
				cout<<n-3;
				break;
			case 7:
				cout<<n+1;
				break;
			case 8:
				cout<<n-1;
				break;
		}
		switch(m)
		{
			case 1:
			case 4:
				cout<<"LB";
				break;
			case 2:
			case 5:
				cout<<"MB";
				break;
			case 3:
			case 6:
				cout<<"UB";
				break;
			case 7:
				cout<<"SU";
				break;
			case 8:
				cout<<"SL";
				break;
		}
		cout<<endl;
	}
	return 0;
}

