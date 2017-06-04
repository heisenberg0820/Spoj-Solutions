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
  ll t,n;
  double x,y,z;
  cin>>t;
  wt
  {
      cin>>n;
      if(n>2)
        z = (double)(n-1)/(n)+ (double) (1)/(n*(n+1));
      else
        z = (double) (1.0/2.0);
      printf("%.8lf\n",z);

  }
  return 0;
}
