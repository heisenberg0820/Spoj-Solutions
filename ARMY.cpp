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
  ll t,ng,nm,i,m1,m2,x;
  cin>>t;
  wt
  {
      cin>>ng>>nm;
      m1 = m2 = -10000;
      i = 0;
      while(i<ng)
      {
          cin>>x;
          m1 = max(m1,x);
          i++;
      }
      i = 0;
      while(i<nm)
      {
          cin>>x;
          m2 = max(m2,x);
          i++;
      }
      if(m1>=m2)
        cout<<"Godzilla\n";
      else
        cout<<"MechaGodzilla\n";
  }
  return 0;
}
