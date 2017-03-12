/* August Challenge 2016 */
#include<bits/stdc++.h> 
using namespace std; 
#define LL long long 
#define LD long double 
#define PB push_back 
#define LOOP(i,n) for(int i=0;i<(n);i++) 
#define FOR(i,a,b) for(int i=(a);i<(b);i++) 
#define mod 1000000007 
int main() 
{
	int t; 
	cin>>t; 
	while(t--) 
	{
		LL n; 
		cin>>n; 
		int a[n]; 
		bool flag=false; 
		LL j=n; LOOP(i,n) 
			cin>>a[i];
		LL ans=0,pos,skip,count=0,temp; 
		map<long ,long >m; 
		LOOP(i,n) 
		{
			pos=i; 
			skip=0; 
			count=0; 
			m.clear();
			m[i]=1; 
			while(pos<n) 
			{ 
				skip=a[pos]+1; 
				pos=(pos+skip)%n; 
				if(pos==i) 
				{ 
					ans++; 
					break;
				}
				else if(m[pos])
					break;
				else
					m[pos]=1;
			} 
		}
		cout<<ans<<endl; 
	}
	return 0; 
}
