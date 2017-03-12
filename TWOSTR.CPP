#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[11],b[11];
		scanf("%s%s",&a,&b);
		int ans=0;
		int l1=strlen(a);
		int l2=strlen(b);
		if(l1==l2)
		{
			for(int i=0;i<l1;i++)
			{
				if(a[i] == '?' || b[i]== '?' || a[i]==b[i])
					ans++;
			}
		}
		if(ans==l1)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

