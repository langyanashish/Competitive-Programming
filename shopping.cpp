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
	getchar();
	char amt[t+1][1000];
	int flagss[t+1]={0};
	int poss[t+1];
	for(int p=0;p<t;p++)
	{
		char s[1000];
		gets(s);
		//cout<<s<<endl;
		int pos=1;
		//getline(cin,s);
		amt[p][0]='$';
		int l=strlen(s);
		//int l=s.length();
		LOOP(i,l)
		{
			if(s[i]=='$')
			{
				for(int j=i+1;j<l;j++)
				{
					if(s[j]>='0' && s[j]<='9')
					{
						amt[p][pos]=s[j];
						pos++;
						if(s[j]>='1')
							flagss[p]=1;
					}
					if((s[j]>='a' && s[j]<='z')||(s[j]>='A' && s[j]<='Z'))
						break;
				}
			}
		}
		poss[p]=pos;
	}
		//cout<<amt<<endl;
	for(int p=0;p<t;p++)
	{
		int pos=poss[p];
		if(flagss[p]==1)
		{
			do{
				if(amt[p][1]=='0')
				{
				for(int i=1;i<pos-1;i++)
					amt[p][i]=amt[p][i+1];
				amt[p][pos-1]='\0';
				}
				pos--;
			}while(amt[p][1]=='0');
			LOOP(i,pos+1)
			printf("%c",amt[p][i]);
		}
		else
			cout<<"$0";
		cout<<endl;
	}
	return 0;
}

