//Range Minimum Query

#include <bits/stdc++.h>

#define wt while(t--)
#define fast ios_base::sync_with_stdio(false)
typedef unsigned long long int ull;
typedef long long int ll;

using namespace std;

ll tree[1000005];
ll arr[1000005];

void build(ll node,ll s,ll e)
{
    if(s==e)
    {
        tree[node]=arr[s];
    }
    else
    {
        ll mid = (s+e)/2;
        build(2*node,s,mid);
        build(2*node+1,mid+1,e);
        tree[node] = min(tree[2*node],tree[2*node+1]);
    }
}

void update(ll node,ll s,ll e,ll i,ll v)
{
    if(s==e)
    {
        arr[i]=v;
        tree[node]=v;
    }
    else
    {
        ll mid = (s+e)/2;
        if(s<=i&&i<=mid)
            update(2*node,s,mid,i,v);
        else
            update(2*node+1,mid+1,e,i,v);
        tree[node] = min(tree[2*node],tree[2*node+1]);
    }

}

ll query(ll node,ll s,ll e,ll l,ll r)
{
    if(r<s||l>e)
        return LLONG_MAX;
    if(l<=s&&e<=r)
        return tree[node];
    ll mid = (s+e)/2;
    ll p1 = query(2*node,s,mid,l,r);
    ll p2 = query(2*node+1,mid+1,e,l,r);
    return min(p1,p2);
}

int main()
{
  fast;
  ll n,q,v,i,l,r,t,ct;
  ct = 1;
  cin>>t;
  wt
  {
  char c;
  cin>>n>>q;
  for(i=1;i<=n;i++)
    cin>>arr[i];
  build(1,1,n);
  cout<<"Scenario #"<<ct<<":\n";
  ct++;
  while(q--)
  {
    cin>>l>>r;
    cout<<query(1,1,n,l,r)<<endl;
  }
  }
  return 0;
}
