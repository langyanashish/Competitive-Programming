#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){	
		char s1[101],s2[101];
		cin>>s1>>s2;
		int min=0,max=0;
		int len=strlen(s1);
		for(int i=0;i<len;i++)
		{
			if(s1[i]=='?' || s2[i]=='?')
				max++;
			else if(s1[i]!=s2[i])
				min++;				
		}
		cout<<min<<" "<<min+max<<endl;
	}
	return 0;
}
