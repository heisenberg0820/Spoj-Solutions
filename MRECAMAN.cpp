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

ll ans[1000000];
map<ll,ll> m;

int main()
{
  fast;
  ans[0] = 0;
  ll i,x,n;
  for(i=1;i<=500000;i++)
  {
      x = ans[i-1]-i;
      if(x>0&&m[x]==0)
      {
          m[x] = 1;
          ans[i] = x;
      }
      else
      {
          x = ans[i-1]+i;
          m[x]=1;
          ans[i]=x;
      }
  }
  while(true)
  {
      cin>>n;
      if(n<0)
        break;
      else
        cout<<ans[n]<<endl;
  }
  return 0;
}
