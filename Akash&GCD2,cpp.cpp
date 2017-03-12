#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = 1000000007;
int a[1000005];
int getMid(int s, int e) 
{  
	return s + (e -s)/2;  
}
int getSumUtil(int *st, int ss, int se, int qs, int qe, int si)
{
    if (qs <= ss && qe >= se)
        return st[si];
    if (se < qs || ss > qe)
        return 0;
    int mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
}
void updateValueUtil(int *st, int ss, int se, int i, int diff, int si)
{
    if (i < ss || i > se)
        return;
    st[si] = st[si] + diff;
    if (se != ss)
    {
        int mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2*si + 1);
        updateValueUtil(st, mid+1, se, i, diff, 2*si + 2);
    }
}
void updateValue(int arr[], int *st, int n, int i, int new_val)
{
    if (i < 0 || i > n-1)
        return;
    LL ans=0;
    for(int j=1;j<=new_val;j++)
        ans=(ans+(i/(__gcd(j,new_val))))%mod;
    
    int diff = ans - st[i];
    arr[i] = new_val;
    updateValueUtil(st, 0, n-1, i, diff, 0);
}
int getSum(int *st, int n, int qs, int qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
        return 0;
    return getSumUtil(st, 0, n-1, qs, qe, 0);
}
int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
    if (ss == se)
    {
        LL ans=0;
        for(int i=1;i<=arr[ss];i++)
        	ans=(ans+(i/(__gcd(i,arr[ss]))))%mod;
		st[si]=ans;
        return ans;
    }
    int mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +
              constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}
int *constructST(int arr[], int n)
{
    int x = (int)(ceil(log2(n))); 
    int max_size = 2*(int)pow(2, x) - 1; 
    int *st = new int[max_size];
    constructSTUtil(arr, 0, n-1, st, 0);
    return st;
}
int main()
{
	int n;
	cin>>n;
	LOOP(i,n)
		cin>>a[i];
	int *st = constructST(a, n);
	int q;
	cin>>q;
	char c;
	int l,r;
	int ans;
	while(q--)
	{
		cin>>c>>l>>r;
		if(c == 'C')
		{
			ans=getSum(st,n,l,r)%mod;
			cout<<ans%mod<<endl;
		}
		else
			updateValue(a,st,n,l,r);
	}
	return 0;
}
#include <bits/stdc++.h>
 
#define mod 1000000007
#define inf 1000000000000LL
#define root2 1.41421
#define root3 1.73205
#define pi 3.14159
#define MAX 500001
#define ll long long int
#define PII pair<int, int>
#define f first
#define s second
#define ss(n) scanf("%d", &n)
#define ssl(n) scanf("%I64d", &n)
#define ssf(n) scanf("%lf", &n)
#define mk make_pair
#define PLL pair<ll, ll>
#define gc getchar
#define pb push_back
using namespace std;
ll A[1000001], st[4000001], L, R, phi[MAX], ret[MAX], val, idx;
void cal()
{
	int i, j;
    for(i = 1 ;i < MAX ; i++ ) phi[i]=i;
    for(i = 2;i < MAX;++i)
    {
        if(phi[i] == i)
        {
            phi[i] = i - 1;
            for(j = 2*i;j < MAX;j += i)
                phi[j] -= (phi[j] / i);
        }
    }
    for(i = 1;i < MAX;++i)
    {
        for(j = i;j < MAX;j += i)
        {
            ret[j] += i*phi[i];
        }
    }
}
void createSegment(int l, int r, int i)
{
    if(l>r)
        return;
    if(l==r)
    {
        st[i]=(1+ret[A[l]])/2;
        return;
    }
    int mid=(l+r)>>1;
    createSegment(l, mid, 2*i+1);
    createSegment(mid+1, r, 2*i+2);
    st[i]=(st[2*i+1]+st[2*i+2])%mod;
}
void update(int l, int r, int i)
{
    if(r<idx||l>idx||l>r)
        return;
    if(l==r&&l==idx)
    {
        A[l]=val;
        st[i]=(1+ret[A[l]])/2;
        return;
    }
    int mid=(l+r)>>1;
    update(l, mid, 2*i+1);
    update(mid+1, r, 2*i+2);
    st[i]=(st[2*i+1]+st[2*i+2])%mod;
}
ll getSum(int l, int r, int i)
{
    if(l>r||r<L||l>R)
        return 0;
    if(l>=L&&r<=R)
        return st[i];
    int mid=(l+r)>>1;
    return (getSum(l, mid, 2*i+1)+getSum(mid+1, r, 2*i+2))%mod;
}
int main()
{
    int i, j, n, q;
    ll ans;
    char ch;
    cal();
    ret[0]=0;
    ss(n);
    for(i=0;i<n;i++)
        ssl(A[i]);
    createSegment(0, n-1, 0);
    ss(q);
    while(q--)
    {
        ch=gc();
        while(ch!='U'&&ch!='C')
            ch=gc();
        if(ch=='C')
        {
            ssl(L);ssl(R);
            L--;R--;
            ans=getSum(0, n-1, 0)%mod;
            cout<<ans<<endl;
        }
        else
        {
            ssl(idx);
            idx--;
            ssl(val);
            update(0, n-1, 0);
        }
    }
}
