#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int player=0,lead=0,t1=0,t2=0,a,b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		t1+=a;
		t2+=b;
		if(t1>t2)
		{
			if((t1-t2)>lead)
			{
				lead=t1-t2;
				player=1;
			}
		}
		else
		{
			if((t2-t1)>lead)
			{
				lead=t2-t1;
				player=2;
			}
		}
	}
	cout<<player<<" "<<lead;
	return 0;
}

