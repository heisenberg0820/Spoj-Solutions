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

stack<ll> st;
bool visited[100005];
vector<ll> g[100005];
vector<ll> r[100005];
ll cn[100005];
vector<ll> f[100005];
ll edge[100005];
vector<ll> ans;

void dfsr(ll s,ll c)
{
    visited[s] = true;
    cn[s] = c;
    for(ll i=0;i<r[s].size();i++)
    {
        if(visited[r[s][i]]==false)
          dfsr(r[s][i],c);
    }
}

void dfs(ll vr)
{
    visited[vr] = true;
    for(ll i=0;i<g[vr].size();i++)
    {
        if(!visited[g[vr][i]])
        {
            dfs(g[vr][i]);
        }
    }
    st.push(vr);
}

void dfs_shrink(ll vr)
{
    for(ll i=0;i<g[vr].size();i++)
    {
      if(cn[vr]!=cn[g[vr][i]])
        edge[cn[vr]]+=1;
    }
}

int main()
{
  ll v,e,x,y,vr,i,c,flag,j;
  fast;
  memset(visited,false,sizeof(visited));
  cin>>v>>e;
  while(e--)
  {
      cin>>x>>y;
      g[x].pb(y);
      r[y].pb(x);
  }
  for(i=1;i<=v;i++)
  {
      if(visited[i]==false)
        dfs(i);
  }
  memset(visited,false,sizeof(visited));
  c = 1;
  while(!st.empty())
  {
      vr = st.top();
      st.pop();
      if(visited[vr]==false)
      {
          dfsr(vr,c);
          c++;
      }
  }
  memset(edge,0,sizeof(edge));
  for(i=1;i<=v;i++)
  {
        dfs_shrink(i);
  }
  flag = 0;
  for(i=1;i<c;i++)
    {
     if(edge[i]==0)
       flag++;
    }
  if(flag==1)
  {
      for(i=1;i<=v;i++)
      {
          if(edge[cn[i]]==0)
            ans.pb(i);
      }
      sort(ans.begin(),ans.end());
      cout<<ans.size()<<"\n";
      for(i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
      cout<<endl;
  }
  return 0;
}
