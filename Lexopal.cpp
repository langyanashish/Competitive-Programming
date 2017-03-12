/* 		September Challenge 2016       	*/
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
		string a;
		cin>>a;
		int l=a.length();
		int i=0;
		int j=l-1;
		bool flag=true;
		while(i<=j)
		{
			if(a[i]==a[j])
			{
				if(a[i]=='.' && a[j]=='.')
					a[i]=a[j]='a';
				i++;
				j--;
				continue;
			}
			if(a[i]=='.' && a[j]!='.')
			{
				a[i]=a[j];
				i++;
				j--;
			}
			else if(a[i]!='.' && a[j]=='.')
			{
				a[j]=a[i];
				i++;
				j--;
			}
			else if(a[i]!=a[j])
			{
				flag=false;
				break;
			}
		}
		if(flag==false)
			cout<<"-1\n";
		else
			cout<<a<<endl;
	}
	return 0;
}

