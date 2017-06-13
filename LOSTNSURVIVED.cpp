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

ll parent[100001];
multiset<ll> s;
ll sz[100001];


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
        if(sz[px]<sz[py])
        {
            parent[px]=parent[py];
            s.erase(s.find(sz[px]));
            s.erase(s.find(sz[py]));
            sz[py]+=sz[px];
            s.insert(sz[py]);
        }
        else
        {
            parent[py]=parent[px];
            s.erase(s.find(sz[px]));
            s.erase(s.find(sz[py]));
            sz[px]+=sz[py];
            s.insert(sz[px]);
        }

}

void make_set(ll n)
{
    for(ll i=1;i<=n;i++)
    {
        parent[i] = i;
        sz[i]=1;
        s.insert(1);
    }
}

int main()
{
  fast;
  ll n,q,i,j,t,pi,pj,x;
  ll ans = 0;
  cin>>n>>q;
  if(n==1)
  {
      cout<<"0\n";
      return 0;
  }
  make_set(n);
  while(q--)
  {
      cin>>i>>j;
      if(find_set(i)!=find_set(j))
      {
          union_set(i,j);
          ans = *s.rbegin()-*s.begin();
          cout<<ans<<endl;
      }
      else
      {
          cout<<ans<<endl;
      }

  }
  return 0;
}
