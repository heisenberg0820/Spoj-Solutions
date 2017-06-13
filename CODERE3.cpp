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
 
ll arr[10000];
ll lis1[10000];
ll lis2[10000];
 
int main()
{
  fast;
  ll t;
  cin>>t;
  wt
  {
      ll n,i,j,ans,m;
      ans = 1;
      cin>>n;
      for(i=0;i<n;i++)
        cin>>arr[i];
 
      lis1[0]=1;
      for(i=1;i<n;i++)
      {
          m = 0;
          for(j=0;j<i;j++)
          {
              if(arr[j]<arr[i])
                m = max(m,lis1[j]);
          }
          lis1[i] = 1+m;
      }
 
      lis2[n-1]=1;
      for(i=n-2;i>=0;i--)
      {
          m = 0;
          for(j=n-1;j>i;j--)
          {
              if(arr[j]<arr[i])
                m = max(m,lis2[j]);
          }
          lis2[i] = 1+m;
      }
      ans = 1;
      for(i=0;i<n;i++)
      {
          ans = max(ans,lis1[i]+lis2[i]-1);
      }
      cout<<ans<<endl;
  }
  return 0;
}
