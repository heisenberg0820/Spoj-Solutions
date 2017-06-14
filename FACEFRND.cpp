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
  set<string> f;
  set<string> ans;
  std::set<string>::iterator it;
  vector<string> v[100000];
  string s;
  ll i,j,n,x;
  cin>>n;
  x = 0;
  for(i=0;i<n;i++)
  {
      cin>>s;
      f.insert(s);
      ans.insert(s);
      cin>>x;
      for(j=0;j<x;j++)
      {
          cin>>s;
          v[i].pb(s);
      }
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<v[i].size();j++)
      {
          s = v[i][j];
            ans.insert(s);
      }
  }
  for(it=f.begin();it!=f.end();it++)
  {
      ans.erase(ans.find(*it));
  }
  cout<<ans.size()<<endl;
  return 0;
}
