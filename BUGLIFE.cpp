#include <bits/stdc++.h>
 
#define wt while(t--)
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
typedef unsigned long long int ull;
typedef long long int ll;
 
using namespace std;
 
ll color[100000];
 
bool isBipartiteUtil(ll s,vector<ll> g[100000])
{
    color[s] = 1;
    queue<ll> q;
    q.push(s);
    while(!q.empty())
    {
        ll vr = q.front();
        q.pop();
        for(ll i=0;i<g[vr].size();i++)
        {
            if(color[g[vr][i]]==-1)
            {
                color[g[vr][i]]=(color[vr]+1)%2;
                q.push(g[vr][i]);
            }
            else if(color[vr]==color[g[vr][i]])
                return false;
        }
    }
    return true;
}
 
bool isBipartite(ll n,vector<ll> g[100000])
{
    for(ll i=1;i<=n;i++)
        color[i]=-1;
    for(ll i=1;i<=n;i++)
    {
        if(color[i]==-1)
        {
            if(isBipartiteUtil(i,g)==false)
                return false;
        }
    }
    return true;
}
 
int main()
{
  fast;
  ll t,v,e,i,j,k,ans,m,n,s,vr,flag;
  cin>>t;
  k = 1;
  wt
  {
      queue<ll> q;
      vector<ll> g[100000];
      cin>>v>>e;
      i = 0;
      while(i<e)
      {
          cin>>m>>n;
          g[m].pb(n);
          g[n].pb(m);
          i++;
      }
      flag = isBipartite(v,g);
      cout<<"Scenario #"<<k<<":\n";
      if(flag==0)
        cout<<"Suspicious bugs found!\n";
      else
        cout<<"No suspicious bugs found!\n";
     k++;
  }
  return 0;
}
