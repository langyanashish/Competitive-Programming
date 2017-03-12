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
		int n,k;
		cin>>n>>k;
		char a[n+1];
		cin>>a;
		for(int i=0;i<n;)
		{
			if(a[i+1] >= a[i])
			{
				k--;
				i++;
				a[i]=' ';
			}
			else
			{
				a[i]=' ';
				i++;
				while(a[i+1]<a[i])
					i++;	
			}
			if(k==0)
				break;
		}
		cout<<a<<endl;
	}
	return 0;
}

