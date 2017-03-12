#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[101];
		cin>>s;
		int a=0,b=0,ans=0;
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i] == 'a')
				a++;
			else if(s[i] == 'b')
				b++;
		}
		if(a==b)
			ans=a;
		else if(a>b)
			ans=b;
		else if(a<b)
			ans=a;
		cout<<ans<<endl;
	}
	return 0;
}

