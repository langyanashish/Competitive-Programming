#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		deque <int> v;
		deque <int>::iterator it;
		int x;
		char c;
		int q;
		cin>>q;
		while(q--)
		{
			
			cin>>c;
			cin>>x;
			if(c=='F')
			{
				v.push_front(x);
			}
			else if(c=='B')
			{
				v.push_back(x);
			}
		}
		for(it=v.begin();it!=v.end();it++)
			cout<<*it<<" ";
		cout<<endl;
	}
	return 0;
}
