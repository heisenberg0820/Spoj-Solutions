#include <bits/stdc++.h>


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

ll dist[10005];
bool visited[10005];
ll n;

void dijikstra(ll s,vector<pair<ll,ll> >v[10005])
{
    for(ll i=1;i<=n;i++)
        dist[i]=100000000;
    dist[s]=0;
    memset(visited,false,sizeof(visited));
    multiset< pair<ll,ll> >m;
    m.insert(mp(0,s));
    while(!m.empty())
    {
        pair<ll,ll> p = *m.begin();
        m.erase(m.begin());
        int x = p.second;
        if(visited[x]==false)
        {
            visited[x] = true;
            for(ll i=0;i<v[x].size();i++)
            {
                ll e = v[x][i].first;
                ll wt = v[x][i].second;
                if(wt+dist[x]<dist[e])
                {
                    dist[e] = dist[x]+wt;
                    m.insert(mp(dist[e],e));
                }
            }
        }
    }
}

int main()
{
  fast;
  ll t;
  ll e,i,j,k,x,y,s,d;
  while(true)
  {
    vector<pair<ll,ll> >v[10005];
    cin>>n>>e;
    if(n==0&&e==0)
        return 0;
    cin>>s>>d;
    for(i=1;i<=e;i++)
    {
       cin>>x>>y>>k;
       v[x].pb(mp(y,k));
    }
      dijikstra(s,v);
      if(visited[d]==true)
       cout<<dist[d]<<endl;
      else
        cout<<"-1\n";
  }
  return 0;
}
