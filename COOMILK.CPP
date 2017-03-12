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
		string a[n];
		LOOP(i,n)
			cin>>a[i];
		bool flag = false;
		LOOP(i,n)
		{
			if(a[i] == "cookie")
			{
				if(i == n-1)
				{
					flag=true;
					break;
				}
				else
				{
					if(a[i+1] == "cookie")
					{
						flag = true;
						break;
					}
				}
			}
		}
		if( flag == true)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return 0;
}

