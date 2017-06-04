#include <bits/stdc++.h>

#define wt while(t--)
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define mp make_pair
#define MOD 1000000007
#define EPS 1e-5
#define INF (1<<28)
typedef unsigned long long int ull;
typedef long long int ll;

using namespace std;

ll parent[1000000];
ll r[1000000];
ll sz[1000000];


ll find_set(ll x)
{
    if(parent[x]!=x)
        parent[x]=find_set(parent[x]);

    return parent[x];
}

void union_set(ll x,ll y)
{
    ll px = find_set(x);
    ll py = find_set(y);
    if(px!=py)
    {

        if(sz[px]<sz[py])
        {
            parent[px]=parent[py];
            sz[py]+=sz[px];
        }
        else
        {
            parent[py]=parent[px];
            sz[px]+=sz[py];
        }

    }
}

void make_set(ll n)
{
    for(ll i=1;i<=2*n;i++)
    {
        parent[i] = i;
        r[i] = 0;
        sz[i] = 1;
    }
}

int main()
{
  fast;
  ll n,q,i,j,t,ans,pi,pj,x,y;
  string a,b;
  cin>>t;
  wt
  {
    map<string,ll> m;
    cin>>q;
    n = 2*q;
    make_set(n);
    j = 1;
    while(q--)
    {
      cin>>a;
      cin>>b;
      if(m[a]==0)
        m[a]=j++;
      if(m[b]==0)
        m[b]=j++;
      x = m[a];
      y = m[b];
      union_set(x,y);
      cout<<sz[find_set(x)]<<endl;
    }
  }
  return 0;
}
