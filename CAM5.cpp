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

int main()
{
  fast;
  ll t,v,e,i,j,k,ans,m,n,s,vr;
  cin>>t;
  wt
  {
      queue<ll> q;
      vector<ll> g[100000];
      ll visited[100000]={false};
      cin>>v;
      cin>>e;
      i = 0;
      while(i<e)
      {
          cin>>m>>n;
          g[m].pb(n);
          g[n].pb(m);
          i++;
      }
      i = 0;
      ans = 0;
      while(i<v)
      {
          s = i;
          if(visited[i]==false)
          {
              visited[i]=true;
              ans++;
              q.push(s);
              while(!q.empty())
              {
                  vr = q.front();
                  q.pop();
                  for(j=0;j<g[vr].size();j++)
                  {
                      if(visited[g[vr][j]]==false)
                      {
                          q.push(g[vr][j]);
                          visited[g[vr][j]]=true;
                      }
                  }
              }
          }
          i++;
      }
      cout<<ans<<"\n";
  }
  return 0;
}
