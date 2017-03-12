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
	int t;
	scanf("%d",&t);
	getchar();
	string a;
	while(t--)
	{
		getline(cin,a);
		int l=a.length();
		int words=1;
		LOOP(i,l)
		{
			if(a[i]==' ')
				words++;
		}
		cout<<words<<endl;
	}
	return 0;
}

