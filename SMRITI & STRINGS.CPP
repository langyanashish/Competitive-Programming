#include<bits/stdc++.h>
using namespace std;
# define MOD	104395301
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		int m;
		cin>>m;
		int l=a.length();
		char z='a';
		for(int b=0;b<26;b++)
		{
			for(int i=l-1;i>=0;i--)
			{
				if(a[i]==z)
				{
					a[i]=' ';
					m--;
					if(m==0)
						goto l;
				}
			}
			z++;
		}
		l:
		for(int i=0;i<l;i++)
		{
			if(a[i]!=' ')
				printf("%c",a[i]);
		}
		cout<<endl;
	}
	return 0;
}

