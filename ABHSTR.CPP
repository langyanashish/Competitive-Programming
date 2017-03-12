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
		char str[100];
		int k=0;
		int l=strlen(a);
		for(int i=0;i<l;i++)
			hash[a[i]-'a']++;
		int c=0;
		for(int i=0;i<30;i++)
				if(hash[i]==1)
				{
					str[k++]=i+'a';
				}
			//cout<<str<<endl;
		char ch1,ch2;
			for(int i=0;i<l;i++)
				for(int j=0;j<k;j++)
					if(a[i]==str[j])
					{
						ch1=a[i];
						break;
					}
			for(int i=l;i>-1;i--)
				for(int j=0;j<k;j++)
					if(a[i]==str[j])
					{
						ch2=a[i];
						break;
					}
					//cout<<ch1<<" "<<ch2<<endl;
			if(ch1>ch2)
				cout<<"ANKU\n";
			else if(ch1<ch2)
				cout<<"SHANKY\n";
			else
				cout<<"PANDEY\n";
			ch1='\0';
			ch2='\0';
		}
		
	return 0;
}

