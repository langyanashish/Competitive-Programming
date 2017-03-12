#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a;
		/*LOOP(i,2*n)
		{
			cin>>a[i];
		}*/
		cin>>a;
		int l=a.length();
		int swaps=0;
		char c=a[0];
		for(int i=0;i<l;i+=2)
		{
			if(a[i]!=c)
				swaps++;
		}
		cout<<swaps<<endl;
	}
	return 0;
}

