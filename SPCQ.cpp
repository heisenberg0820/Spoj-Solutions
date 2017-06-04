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

ll sod(ll x)
{
    ll ans = 0;
    while(x>0)
    {
        ans+=x%10;
        x/=10;
    }
    return ans;
}

int main()
{
  fast;
  ll t,n,ans,x;
  cin>>t;
  wt
  {
      cin>>n;
      ans = n;
      while(true)
      {
          x = sod(ans);
          if(ans%x==0)
            break;
          ans++;
      }
      cout<<ans<<"\n";
  }
  return 0;
}
