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
	int n;
	cin>>n;
	string a;
	cin>>a;
	if(n<=2)
	{
		cout<<a;
		return 0;
	}
	else
	{
		char ans[n];
		LOOP(i,n)
			ans[i]='.';
		int m=(n-1)/2;
		ans[m]=a[0];
		bool flag=false;
		if(n&1)
			m--;
		else
		{
			flag=true;
			m++;
		}
		for(int i=1;i<n;i++)
		{
			ans[m]=a[i];
			if(flag==false)
			{
				while(ans[m]!='.')
					m++;
				flag=true;
			}		
			else
			{
				while(ans[m]!='.')
					m--;
				flag=false;
			}
		}
		cout<<ans;	
	}
	return 0;
}

