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
        ll p1,p2;
        p1 = arr[i];
        p2 = arr[j];
        if(arr[i+1]>=arr[j])
            p1+=recur(i+2,j);
        else
            p1+=recur(i+1,j-1);


        if(arr[i]>=arr[j-1])
            p2+=recur(i+1,j-1);
        else
            p2+=recur(i,j-2);
        return dp[i][j] = max(p1,p2);
    }
}

int main()
{
  fast;
  ll c = 0;
  while(true)
  {
      memset(dp,-1,sizeof(dp));
      cin>>n;
      if(n==0)
        break;
      else
      {
          c++;
          ll sum = 0;
          for(ll i=1;i<=n;i++)
          {
            cin>>arr[i];
            sum+=arr[i];
          }
          ll p1 = recur(1,n);
          ll p2 = sum-p1;
          cout<<"In game "<<c<<", the greedy strategy might lose by as many as "<<p1-p2<<" points.\n";
      }
  }
  return 0;
}
