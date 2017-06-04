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

ll parent[100005];
ll r[100005];


ll find_set(ll x)
{
    if(parent[x]==x)
        return x;
    else
        return find_set(parent[x]);
}

void union_set(ll x,ll y)
{
    ll px = find_set(x);
    ll py = find_set(y);
    if(px!=py)
    {
        if(r[px]>r[py])
        {
            parent[py] = px;
        }

        else if(r[px]<r[py])
        {
            parent[px] = py;
        }
        else
        {
            parent[px] = py;
            r[py]+=1;
        }
    }
}

void make_set(ll n)
{
    for(ll i=1;i<=n;i++)
    {
        parent[i] = i;
        r[i] = 0;
    }
}

int main()
{
  fast;
  ll n,q,i,j,t,x,y,w,a,b,c,e,sum;

  while(true)
  {
   cin>>n>>e;
   if(n!=0&&e!=0)
   {
       sum = 0;
       vector<pair<ll,pair<ll,ll> > >v;
       vector<pair<ll,pair<ll,ll> > >ans;
       make_set(n);
       i = 1;
       while(i<=e)
       {
         cin>>a>>b>>w;
         sum+=w;
         v.pb(mp(w,mp(a,b)));
         i++;
       }
       sort(v.begin(),v.end());
       c = n-1;
       i = 0;
       while(i<e)
        {
          x = v[i].second.first;
          y = v[i].second.second;
          w = v[i].first;
          if(find_set(x)!=find_set(y))
           {
            union_set(x,y);
            ans.pb(mp(w,mp(x,y)));
            sum-=w;
           }
         i++;
        }
        cout<<sum<<endl;
   }

  }
  return 0;
}
