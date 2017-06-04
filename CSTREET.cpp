//O(v^2)

#include <bits/stdc++.h>
#define wt while(t--)
#define fast ios_base::sync_with_stdio(false)
typedef unsigned long long int ull;
typedef long long int ll;

using namespace std;

bool mSet[10005]={false};
ll key[10005];
ll parent[10005];
ll weight[10005][10005];

ll min_key(ll n)
{
    ll ans = 1000000000;
    ll k = -1;
    for(ll i=1;i<=n;i++)
    {
        if(mSet[i]==false&&key[i]<ans)
        {
            k = i;
            ans = key[i];
        }
    }
    return k;
}

int main()
{
  fast;
  ll t;
  cin>>t;
  wt
  {
      vector<ll> v[10005];
      for(ll i=0;i<1000;i++)
        key[i] = 1000000000;
      ll e,i,j,k,l,m,a,b,x,c,n,sum,s,p;
      cin>>p;
      cin>>n;
      cin>>e;
      for(i=1;i<=e;i++)
       {
        cin>>a>>b>>x;
        v[a].push_back(b);
        v[b].push_back(a);
        weight[a][b] = weight[b][a] = x;
       }
       s = 1;
       key[s] = 0;
       parent[s] = -1;
       c = 1;
       while(c<=n)
        {
          i = min_key(n);
          mSet[i] = true;
          for(j=0;j<v[i].size();j++)
           {
             if(mSet[v[i][j]]==false&&weight[i][v[i][j]]<key[v[i][j]])
              {
                key[v[i][j]] = weight[i][v[i][j]];
                parent[v[i][j]] = i;
              }
          }
          c++;
         }
         sum = 0;
         for(i=2;i<=n;i++)
          {
            sum+=weight[i][parent[i]];
          }
        cout<<sum*p<<endl;
  }
  return 0;
}
