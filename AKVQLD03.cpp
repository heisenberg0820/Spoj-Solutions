//Range Minimum Query

#include <bits/stdc++.h>

#define wt while(t--)
#define fast ios_base::sync_with_stdio(false)
typedef unsigned long long int ull;
typedef long long int ll;

using namespace std;

ll bit[1000005];
ll arr[1000005];
void update(ll i,ll v,ll n)
{
    while(i<=n)
    {
        bit[i]+=v;
        i += i&-i;
    }
}

void build(ll n)
{
    for(ll i=1;i<=n;i++)
        bit[i]=0;
    for(ll i=1;i<=n;i++)
        update(i,arr[i],n);
}

ll query(ll i)
{
    ll sum = 0;
    while(i>0)
    {
        sum+=bit[i];
        i -= i&-i;
    }
    return sum;
}

int main()
{
  fast;
  ll n,q,v,i,l,r;
  string s;
  cin>>n>>q;
  for(i=1;i<=n;i++)
    arr[i]=0;
  build(n);
  while(q--)
  {
      cin>>s;
      if(s=="add")
      {
          cin>>i>>v;
          update(i,v,n);
      }
      else
      {
          cin>>l>>r;
          cout<<query(r)-query(l-1)<<endl;
      }
  }
  return 0;
}
