#include<bits/stdc++.h>
using namespace std;
#define LL	long long
LL getMid(LL s, LL e) 
{  
	return s + (e -s)/2;
}
long long getSumUtil(LL *st, LL ss, LL se, LL qs, LL qe, LL si)
{
    if (qs <= ss && qe >= se)
        return st[si];
 	if (se < qs || ss > qe)
        return 0;
 	LL mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
}
long long getSum(LL *st, LL n, LL qs, LL qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
        return 0;
    return getSumUtil(st, 0, n-1, qs, qe, 0);
}
LL constructSTUtil(LL arr[], LL ss, LL se, LL *st, LL si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    LL mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +
              constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}
LL *constructST(LL arr[], LL n)
{
    LL x = (LL)(ceil(log2(n))); 
    LL max_size = 2*(LL)pow(2, x) - 1; 
    LL *st = new LL[max_size];
    constructSTUtil(arr, 0, n-1, st, 0);
    return st;
}
int main()
{
    LL n;
    cin>>n;
    LL a[n+1];
    LL sum=0;
    for(LL i=0;i<n;i++)
    {
    	cin>>a[i];
    	sum+=a[i];
	}
    LL *st = constructST(a, n);
    LL q;
    cin>>q;
    long long s=0,l,r;
    while(q--)
    {
    	cin>>l>>r;
    	if(l==r)
    		s=0;
    	else if(l == r+1)
    		s=a[r-1];
    	else
    		s=getSum(st,n,l,r-1);
    	cout<<s<<endl;
    }
    return 0;
}

