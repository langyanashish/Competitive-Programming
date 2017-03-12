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
	while(t--)
	{
		char s[1000];
		gets(s);
		//cout<<s<<endl;
		char amt[1000];
		int pos=1;
		bool flag=0;
		//getline(cin,s);
		amt[0]='$';
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
						amt[pos]=s[j];
						pos++;
						if(s[j]>='1')
							flag=1;
					}
					if((s[j]>='a' && s[j]<='z')||(s[j]>='A' && s[j]<='Z'))
						break;
				}
			}
		}
		//cout<<amt<<endl;
		if(flag==1)
		{
			do{
				if(amt[1]=='0')
				{
				for(int i=1;i<pos-1;i++)
				{
					amt[i]=amt[i+1];
				}
				amt[pos-1]='\0';
				}
				pos--;
			}while(amt[1]=='0');
			LOOP(i,pos+1)
			printf("%c",amt[i]);
		}
		else
			cout<<"$0";
		cout<<endl;
	}
	return 0;
}

