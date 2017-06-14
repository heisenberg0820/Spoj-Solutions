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
  multiset<ll> s;
  std::multiset<ll>::iterator it;
  ll t,i,x,n,m,M,ans=0;
  cin>>t;
  wt
  {
      cin>>n;
      for(i=0;i<n;i++)
      {
          cin>>x;
          s.insert(x);
      }
      it = s.begin();
      m = *it;
      it = s.end();
      it--;
      M = *it;
      ans+=(M-m);
      s.erase(s.begin());
      s.erase(--s.end());
  }
  cout<<ans<<endl;
  return 0;
}
