#include<bits/stdc++.h>
using namespace std;
int hash[30];
void zero()
{
	for(int i=0;i<30;i++)
		hash[i]=0;
}
int main()
{
	//std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		zero();
		string a,b;
		cin>>a>>b;
		int count=0;
		for(int i=0;i<b.length();i++)			
			hash[b[i]-'a']++;
		int pos;
		for(int i=0;i<30;i++)		
			if(hash[i]>0)	
			{
				count = hash[i];
				pos=i;
				break;
			}
		for(int i=pos+1;i<30;i++)
		{
			if(hash[i]>0)
			{
				count=count^hash[i];
			}
		}
		if(count > 0)
			cout<<a<<endl;
		else
		{
			if(a=="Tarun")
				cout<<"Varun\n";
			else
				cout<<"Tarun\n";
		}
	}
	return 0;
}

