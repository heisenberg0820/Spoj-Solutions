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

ll arr[2005];
ll dp[2005][2005];
ll n;

ll recur(ll i,ll j)
{
    if(i>j)
     return 0;
    else if(dp[i][j]!=-1)
        return dp[i][j];
    else
    {
        ll y = n+1-(j-i+1);
        return dp[i][j] = max(y*arr[i]+recur(i+1,j),y*arr[j]+recur(i,j-1));
    }
}

int main()
{
  memset(dp,-1,sizeof(dp));
  fast;
  cin>>n;
  for(ll i=1;i<=n;i++)
    cin>>arr[i];
  cout<<recur(1,n)<<endl;
  return 0;
}
