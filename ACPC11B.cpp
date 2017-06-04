#include <bits/stdc++.h>

#define wt while(t--)
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define mp make_pair
#define MOD 1000007
#define EPS 1e-5
#define INF (1<<28)
#define pi 3.141593
typedef unsigned long long int ull;
typedef long long int ll;

using namespace std;

int main()
{
  fast;
  ll t,n1,n2,j,i,x,ans;
  cin>>t;
  wt
  {
      vector<ll> v;
      vector<ll> u;
      cin>>n1;
      i = 0;
      while(i<n1)
      {
          cin>>x;
          v.pb(x);
          i++;
      }
      sort(v.begin(),v.end());
      i = 0;
      cin>>n2;
      while(i<n2)
      {
          cin>>x;
          u.pb(x);
          i++;
      }
      sort(u.begin(),u.end());
      ans = LLONG_MAX;
      for(i=0;i<n1;i++)
      {
          for(j=0;j<n2;j++)
          {
              if(v[i]>=1&&v[i]<=1000000&&u[j]>=1&&u[j]<=1000000)
               ans = (ll) min(ans,(ll)abs(v[i]-u[j]));
          }
      }
      cout<<ans<<"\n";
  }
  return 0;
}
