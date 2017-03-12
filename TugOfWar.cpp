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
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		int a[N+1];
		LOOP(i,N)
			cin>>a[i];
		sort(a,a+N);
		int i=0;
		int j=N-1;
		int ans=1;
		LL left=a[0],right=a[N-1];
		while(i<j)
		{
			if(right > left+a[i+1])
			{
				i++;
				if(i<j)
					left+=a[i];
			}
			else
			{
				j--;
				if(j>i)
				{
					right+=a[j];
					ans++;
				}
			}
		}
		//cout<<left<<" "<<right<<endl;
		if(left==right)
			cout<<"-1\n";
		else if(N==2 && a[0]==a[1])
			cout<<"-1\n";
		else
			cout<<ans<<endl;
	}
	return 0;
}
