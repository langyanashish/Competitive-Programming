/* 	ZCO	*/
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
	int n,k;
	cin>>n>>k;
	int a[n+1];
	LOOP(i,n)
		cin>>a[i];
	sort(a,a+n);
	int count=0;
	/*for(int i=n-1;i>=0;i--)
	{
			for(int j=0;j<i;j--)
			{
				if(abs(a[i]-a[j]) >= k)
					count++;
		//cout<<"Hi\n";	
	}*/
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]-a[i]>=k)
			{
				count+=n-j;
				break;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}

