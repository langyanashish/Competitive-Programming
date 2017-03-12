#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
#define MAX 100000
bool v[MAX];
int len, sp[MAX];
void Sieve(){
	for (int i = 2; i < MAX; i += 2)	
		sp[i] = 2;//even numbers have smallest prime factor 2
	for (LL i = 3; i < MAX; i += 2){
		if (!v[i])
		{
			sp[i] = i;
			for (LL j = i; (j*i) < MAX; j += 2){
				if (!v[j*i])	
					v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}

int main()
{
	Sieve();
	for (int i = 0; i < 50; i++)	
		cout << sp[i] << endl;	
    return 0;
}
