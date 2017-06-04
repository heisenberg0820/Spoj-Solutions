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

ll coff[10000];
ll ev[10000];

int main()
{
  fast;
  ll n,k,i,j,l,x,ans;
  l = 1;
  while(true)
  {
      cin>>n;
      if(n==-1)
        break;
      n++;
      i = 0;
      while(i<n)
      {
          cin>>coff[i];
          i++;
      }
      cin>>k;
      i = 0;
      while(i<k)
      {
          cin>>ev[i++];
      }
      cout<<"Case "<<l<<":\n";
      l++;
      for(i=0;i<k;i++)
      {
          x = ev[i];
          ans = coff[0];
          for(j=1;j<n;j++)
          {
              ans = ans*x+coff[j];
          }
          cout<<ans<<"\n";
      }
  }
  return 0;
}
