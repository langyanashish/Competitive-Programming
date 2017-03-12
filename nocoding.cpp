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
	char a[10010];
	while(t--)
	{
		scanf("%s",&a);
		int l=strlen(a);
		int count=2;
		for(int i=1;i<l;i++)
		{
			if(a[i]>=a[i-1])
			{
				count+=a[i]-a[i-1];
				//cout<<count<<"\n";
			}
			else
			{
				count+='z'-a[i-1];
				count+=a[i]-'a'+1;
				//cout<<count<<"\n";
			}
			count++;
		}
		//cout<<count<<"\n";
		l*=11;
		if(count>l)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}

