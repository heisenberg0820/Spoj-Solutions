#include <bits/stdc++.h>
#include <cstdio>

#define wt while(t--)
#define fast ios_base::sync_with_stdio(false)
typedef long long int ll;

using namespace std;

vector<ll> v;

int main()
{
  fast;
  ll t,n,k,c,i,j,x,sum,r,l,h,m,ans;
  sum = 0;
  cin>>n>>r;
  for(i=0;i<n;i++)
  {
      cin>>x;
      v.push_back(x);
  }
  sort(v.begin(),v.end());
  l = v[0];
  h = v[n-1];
  while(l<=h)
  {
      m = (l+h)/2;
      sum = 0;
      for(i=0;i<n;i++)
      {
          if(v[i]>m)
          {
              sum+=(v[i]-m);
          }
      }
      if(sum>r)
      {
          l = m+1;
          if(m>h)
          {
              h = m;
          }
      }
      else if(sum<r)
      {
          h = m-1;
      }
      else
      {
          h = m;
          break;
      }

  }
  printf("%lld\n",h);
  return 0;
}
