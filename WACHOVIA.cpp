#include <bits/stdc++.h>

#define whilet while(t--)
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

vector<pair<ll,ll> >v;

int main()
{
  fast;
  ll t,k,x,y,n,i,j;
  cin>>t;
  whilet
  {
      ll dp[55][1005];
      cin>>k>>n;
      for(i=0;i<n;i++)
      {
          cin>>x>>y;
          v.pb(mp(x,y));
      }
      sort(v.begin(),v.end());
      for(i=0;i<n;i++)
      {
          dp[i][0]=0;
      }
        j = 0;
        while(j<=k)
        {
            if(j<v[0].first)
                dp[0][j] = 0;
            else
                dp[0][j] = v[0].second;
            j++;
        }
      for(i=1;i<n;i++)
      {
          for(j=1;j<=k;j++)
          {
              if(j<v[i].first)
              {
                  dp[i][j] = dp[i-1][j];
              }
              else
              {
                  dp[i][j] = max(v[i].second+dp[i-1][j-v[i].first],dp[i-1][j]);
              }
          }
      }
      cout<<"Hey stupid robber, you can get "<<dp[n-1][k]<<"."<<endl;
      v.clear();
  }
  return 0;
}
