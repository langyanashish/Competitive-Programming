/* July 2016 LOC */
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
	int n;
	cin>>n;
	string s[n];
	LOOP(i,n)
		cin>>s[i];
	int couples=0;
	int l1,l2;
	bool flag=0;
	LOOP(i,n)
	{
		l1=s[i].length();
		LOOP(j,n)
		{
			l2=s[j].length();
			if(l1==l2 && i!=j)
			{
				for(int k=0;k<l1-2;k++)
				{
					if(s[i][k]!=s[j][k])
						flag=1;
				}
				if(flag==0)
				{
					if(s[i][l1-2]=='k' && s[j][l1-2]=='k')
					{
						if((s[i][l1-1]=='a' && s[j][l1-1]=='i') || (s[i][l1-1]=='i' && s[j][l1-1]=='a'))
						{
							couples++;
							s[i]="";
							s[j]="";
						}
					}
				}
				flag=0;
			}
		}
	}
	cout<<couples<<endl;
	return 0;
}

