#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		int l = a.length();
		int i=0,j=l-1;
		char b[l];
		int temp;
		for(int k=0;k<l;k++)
		{
			temp = (int)a[i] + (int)(a[j]-'a'+1);
			if(temp > 122)
			{
				int temp2 = temp - 122;
				temp = 96+temp2;
			}
			b[k] = (char)temp;			
			i++;
			j--;
		}
		LOOP(z,l)
			cout<<b[z];
		cout<<endl;
	}
	return 0;
}

