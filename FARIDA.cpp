#include <bits/stdc++.h>

#define wt while(t--)
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
typedef unsigned long long int ull;
typedef long long int ll;

using namespace std;

ll arr[1000000];

int main()
{
  fast;
  ll t,l,n,in,ex,x,i;
  cin>>t;
  l = 1;
  wt
  {
      cin>>n;
      i = 0;
      while(i<n)
        cin>>arr[i++];
      if(n>0)
      {
       in = arr[0];
       ex = 0;
       for(i=1;i<n;i++)
       {
          x = max(in,ex);
          in = ex+arr[i];
          ex = x;
       }
       cout<<"Case "<<l<<": "<<max(in,ex)<<"\n";
      }
      else
        cout<<"Case "<<l<<": 0"<<"\n";
      l++;

  }
  return 0;
}
