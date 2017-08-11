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

vector<ll> a;
vector<ll> b;
ll arr[1005];

int main()
{
  fast;
  ll n,i,j,k,ans,h,l;
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          for(k=0;k<n;k++)
          {
              a.pb(arr[i]*arr[j]+arr[k]);
          }
      }
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          for(k=0;k<n;k++)
          {
              if(arr[k]!=0)
               b.pb((arr[i]+arr[j])*arr[k]);
          }
      }
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  ans = 0;
  for(i=0;i<a.size();i++)
  {
      std::vector<ll>::iterator low,high;
      low = std::lower_bound (b.begin(), b.end(), a[i]);
      high = std::upper_bound (b.begin(), b.end(), a[i]);
      l = low-a.begin();
      h = high-a.begin();
      ans+=(h-l);
  }
  cout<<ans<<endl;
  return 0;
}
