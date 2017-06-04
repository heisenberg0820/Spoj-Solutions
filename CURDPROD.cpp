#include <bits/stdc++.h>

#define wt while(t--)
#define fast ios_base::sync_with_stdio(false)
typedef long long int ll;

using namespace std;

ll v[100000];

int main()
{
  fast;
  ll t,n,k,mid,sum,i,high;
  cin>>t;
  wt
  {
      cin>>n>>k;
      ll low = 0;
      for(i=0;i<n;i++)
        cin>>v[i];
      sort(v,v+n);
      high = v[n-1]*k;
      while(low<high)
      {
          mid = (low+high)/2;
          sum = 0;
          for(i=0;i<n;i++)
          {
             sum+=(mid/v[i]);
          }
          if(sum>=k)
          {
              high=mid;
          }
          else
          {
              low=mid+1;
          }
      }
      cout<<low<<"\n";
  }
  return 0;
}
