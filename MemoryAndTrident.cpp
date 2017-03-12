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
	string a;
	cin>>a;
	int l=0,r=0,u=0,d=0;;
	int l1=a.length();
	if(l1 & 1)
		cout<<"-1";
	else
	{
		LOOP(i,l1)
		{
			if(a[i] == 'L')
				l++;
			else if(a[i] == 'R')
				r++;
			else if(a[i] == 'U')
				u++;
			else if( a[i] == 'D')
				d++;
		}
		cout<<(abs(l-r)/2)+(abs(u-d)/2);
	}
	
	return 0;
}

