#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
void multiply(int F[2][2], int M[2][2]);
void power(int F[2][2], int n);
/* function that returns nth Fibonacci number */
int fib(int n)
{
  int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0]%MOD;
}
 
/* Optimized version of power() in method 4 */
void power(int F[2][2], int n)
{
  if( n == 0 || n == 1)
      return;
  int M[2][2] = {{1,1},{1,0}};
 
  power(F, n/2);
  multiply(F, F);
 
  if (n%2 != 0)
     multiply(F, M);
}
 
void multiply(int F[2][2], int M[2][2])
{
  int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long n,m;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<m;i++)
		{
			char ch;
			int b,c;
			cin>>ch;
			cin>>b>>c;
			long long ans=0;
			if(ch=='C')
			{
				a[b-1]=c;
			}
			else if(ch=='Q')
			{
				for(int j=b;j<=c;j++)
				{
					ans+=fib(a[j]);
					for(int k=j+1;k<=c;k++)
						ans+=fib(a[j]+a[k]);
											
				}
			}
		}
	}
	return 0;
}

