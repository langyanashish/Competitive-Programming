#include<bits/stdc++.h>
using namespace std;
int main()
{
	//std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	int hash[125];
	while(t--)
	{
		for(int i=0;i<125;i++)	hash[i]=0;
		char real[101],all[101];
		scanf("%s",&real);
		scanf("%s",&all);
		for(int i=0;i<strlen(real);i++)			hash[real[i]]++;
		int count=0;
		for(int i=0;i<strlen(all);i++)
		{
			if(hash[all[i]])
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}

