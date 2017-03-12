#include<bits/stdc++.h>
#include <stdint.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
bool isPrime[100000001];
vector<int>p;
void sieve(int N) 
{
    for(int i = 0; i <= N;++i) 
	{
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= N; ++i) 
	{
         if(isPrime[i] == true) 
		 {
             // Mark all the multiples of i as composite numbers
             for(int j = i * i; j <= N ;j += i)
                 isPrime[j] = false;
            p.PB(i);
        }
    }
}
bool isp(int x)
{
	if(x<=1) return false;
	if(x<=3) return true;
	if(x%2==0||x%3==0) return false;
	for(int i=5;i*i<=x;i+=6)
		if(x%i==0||x%(i+2)==0) 
			return false;
	return true;
}
int main()
{
	sieve(10000001);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l = s.length();
		bool f=false;
		int a=0,b=0;
		for(int i=0;i<l;i++)
		{
			if(s[i]=='-')
			{
				f=true;
			}
			else if(f==false)
			{
				a=a*10+(int)(s[i]-'0');
			}
			else
			{
				b=b*10+(int)(s[i]-'0');
			}	
		}
		if(b<=10000000)
		{
			int k=0;
			while(p[k]<=b)
			{
				if(p[k]>=a)
					cout<<p[k++]<<"" ";
				k++;
			}
		}
		else
		for(int i=a;i<=b;i++)
		{
			if(i<=10000000)
			{
				if(isPrime[i]==true)
					cout<<i<<" ";
			}
			else
				if(isp(i)==true)
					cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}

