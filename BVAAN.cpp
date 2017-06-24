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

ll dp[105][105][105];
string s,p;

ll recur(ll i,ll j,ll k)
{
    if(k<=0)
        return 0;
    if(i<0||j<0)
        return LLONG_MIN;
    if(dp[i][j][k]!=-1)
        return dp[i][j][k];
    if(s.at(i)==p.at(j))
    {
        char c = s.at(i);
        ll x = (ll) c;
        return dp[i][j][k] = max(recur(i-1,j-1,k),recur(i-1,j-1,k-1)+x);
    }
    else
    {
        return dp[i][j][k] = max(recur(i-1,j,k),recur(i,j-1,k));
    }
}


int main()
{
  fast;
  ll t,k,i,j,x;
  cin>>t;
  wt
  {
      memset(dp,-1,sizeof(dp));
      cin>>s;
      cin>>p;
      cin>>k;
      x = recur(s.length()-1,p.length()-1,k);
      if(x<0)
        x=0;
      cout<<x<<endl;
  }
  return 0;
}
