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
    for(ll i=1;i<=n;i++)
    {
        parent[i] = i;
        r[i] = 0;
        sz[i] = 1;
    }
}

int main()
{
  fast;
  ll n,q,i,j,t,ans,pi,pj,x,y,m;
  char c;
  cin>>n>>m;
  cin>>q;
  make_set(n);
  while(q--)
  {
    cin>>c;
    if(c=='A')
    {
        cin>>x>>y;
        pi = find_set(x);
        pj = find_set(y);
        if(pi!=pj)
        {
            if(sz[pi]+sz[pj]<=m)
                union_set(x,y);
        }
    }
    else if(c=='E')
    {
        cin>>x>>y;
        if(find_set(x)==find_set(y))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    else
    {
        cin>>x;
        cout<<sz[find_set(x)]<<endl;
    }

  }
  return 0;
}
