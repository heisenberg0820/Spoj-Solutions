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
  ll t,n,i,j,ans;
  ll arr[100000];
  cin>>t;
  wt
  {
      cin>>n;
      ans = ((3*n*n+n)/2)%MOD;
      if(n==1)
       ans=2;
      cout<<ans<<"\n";

  }
  return 0;
}
