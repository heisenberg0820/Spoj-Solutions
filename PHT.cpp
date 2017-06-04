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
  ll t,x,i,j,k,n;
  cin>>t;
  i = 1;
  wt
  {
      cin>>x;
      n = (ll) round(sqrt(x+1));
      while(n>=0)
      {
          k = n*n+2*n;
          if(k<=x)
          {
             cout<<"Case "<<i<<": "<<n<<endl;
             break;
          }
          n--;
      }
      i++;
  }
  return 0;
}
