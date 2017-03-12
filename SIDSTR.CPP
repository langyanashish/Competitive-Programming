#include<bits/stdc++.h>
using namespace std;
# define MOD	104395301
int hash[30]={0};
void reset()
{
	for(int i=0;i<30;i++)
		hash[i]=0;
}
int main()
{
	char a[100000];
	int t;
	cin>>t;
	while(t--)
	{
		reset();
		cin>>a;
		int l=strlen(a);
		for(int i=0;i<l;i++)
			hash[a[i]-'a']++;
		char ch;
		int max=0;
		for(int i=0;i<30;i++)
		{
			if(hash[i]>max)
			{
				max=hash[i];
				ch=i+'a';
			}
		}
		int points=0;
		for(int i=0;i<l;i++)
		{
			if(a[i]!=ch)
			{
				if(a[i]<ch)
					points=points-(ch-a[i]);
				else
					points=points+(a[i]-ch);
			}
		}
		if(points<0)
		{
			points=points-(2*points);
			cout<<points<<endl;
		}
		else
			cout<<points<<endl;
	}
	return 0;
}

