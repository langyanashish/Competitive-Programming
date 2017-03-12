#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,rank=0,r=0,top=0,bug=0,b=0,host=0;
		string o,x;
		cin>>a>>o;
		for(int i=0;i<a;i++)
		{
			cin>>x;
			if(x=="CONTEST_WON")
			{
				cin>>r;
				if(r<21)
					r=300+20-r;
				else
					r=300;
				rank+=r;
			}
			if(x=="TOP_CONTRIBUTOR")
			{
				top+=300;
			}
			if(x=="BUG_FOUND")
			{
				cin>>b;
				if(b<50 || b>1000)
					b=0;
				bug+=b;
			}
			if(x=="CONTEST_HOSTED")
				host+=50;
		}
		int total=rank+top+bug+host;
		if(o=="INDIAN")
		cout<<total/200<<endl;
		else
		cout<<total/400<<endl;
	}
	return 0;
}

