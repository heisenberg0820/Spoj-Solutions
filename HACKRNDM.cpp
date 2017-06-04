#include <bits/stdc++.h>

#define wt while(t--)
#define fast ios_base::sync_with_stdio(false)
typedef long long int ll;

using namespace std;

ll v[100000];

ll find_num(ll x,ll n)
{
    ll low = 0;
    ll high = n-1;
    while(low<=high)
    {
        ll mid = (low+high)/2;
        if(v[mid]==x)
            return 1;
        else if(v[mid]>x)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return 0;
}

int main()
{
  fast;
  ll t,n,k,c,i,j,x;
  cin>>n>>k;
  for(i=0;i<n;i++)
  {
      cin>>v[i];
  }
  sort(v,v+n);
  c = 0;
  for(i=0;i<n-1;i++)
  {
      x = v[i]+k;
      c+=find_num(x,n);
  }
  cout<<c<<"\n";
  return 0;
}
