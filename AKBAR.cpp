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
#define pi 3.141593
typedef unsigned long long int ull;
typedef long long int ll;

using namespace std;

vector<ll> g[1000005];
vector<ll> v[1000005];
bool visited[1000005];
ll n;

bool bfs(ll s,ll p)
{
    if(visited[s]==true)
        return false;
    if(!std::binary_search(g[s].begin(),g[s].end(),s))
        g[s].pb(s);
    sort(g[s].begin(),g[s].end());
    queue<pair<ll,ll> > q;
    q.push(mp(s,p));
    visited[s] = true;
    while(!q.empty())
    {
        pair<ll,ll> pt = q.front();
        ll vr = pt.first;
        ll po = pt.second;
        q.pop();
        for(ll i=0;i<v[vr].size()&&po>0;i++)
        {
            ll x = v[vr][i];
            if(visited[x]==false)
            {
              if(!std::binary_search(g[x].begin(),g[x].end(),s))
               {
                 g[x].pb(s);
               }
              sort(g[x].begin(),g[x].end());
              q.push(mp(x,po-1));
              visited[x] = true;
            }
        }
        p--;
    }
    return true;
}

bool check()
{
    for(ll i=1;i<=n;i++)
    {
        if(g[i].size()!=1)
            return false;
    }
    return true;
}

int main()
{
  ll t,e,m,a,b,k,s;
  scanf("%lld",&t);
  wt
  {
      memset(visited,false,sizeof(visited));
      scanf("%lld %lld %lld",&n,&e,&m);
      while(e--)
      {
          scanf("%lld %lld",&a,&b);
          v[a].pb(b);
          v[b].pb(a);
      }
      bool x = true;
      while(m--)
      {
          cin>>k>>s;
          if(x)
          {
              x = bfs(k,s);
          }
      }
      if(check()&&x)
        printf("Yes\n");
      else
        printf("No\n");
      for(ll i=1;i<=n;i++)
      {
          v[i].clear();
          g[i].clear();
      }

  }
  return 0;
}
