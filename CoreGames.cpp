#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
typedef struct node
{
	int item;
	struct node *next;
}node;
node *s,*p,*q,*r;
void insert_item(int x)
{
	q=(node*)malloc(sizeof(node));
	q->item=x;
	q->next='\0'; 
	r->next=q;
    r=q;
}
int main()
{
	int n,k;
	cin>>n>>k;
	p=(node*)malloc(sizeof(node));
	p->item = 1;
	p->next='\0';
	r=p;
	for(int i=2;i<=n;i++)
		insert_item(i);
	r->next=p;
	q=p;
	s=p;
	vector<int> v;
	while(v.size() != n)
	{
		q=s;
		LOOP(i,k-2)
			q=q->next;
		r=q;
		q=q->next;
		s=q->next;
		v.PB(q->item);
		r->next=s;
		q->next='\0';
		free(q);
		q='\0';
	}
	LOOP(i,v.size())
		cout<<v[i]<<" ";
	return 0;
}

