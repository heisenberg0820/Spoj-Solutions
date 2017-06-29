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

vector<ll> sa;
vector<ll> sb;
ll arr1[100];
ll arr2[100];

int main()
{
  fast;
  ll n,a,b,s1,s2,i,p,k,sum,x,sum1,sum2,l1,l2,ans,flag,ca,cb;
  cin>>n>>a>>b;
  s1 = n/2;
  s2 = n-s1;
  for(i=0;i<n;i++)
  {
      cin>>x;
      if(i<s1)
       arr1[i]=x;
      else
        arr2[i-s1]=x;
  }
  ca = cb = 0;
  p = 1<<s1;
  i = 0;
  while(i<p)
  {
      sum = 0;
      k = 0;
      flag = 0;
      while(k<s1)
      {
          if(i&1<<k)
          {
             sum+=arr1[k];
             flag=1;
          }
          k++;
      }
      if(flag==1)
      {
          sa.pb(sum);
          if(sum>=a&&sum<=b)
            ca++;
      }
      i++;
  }

  p = 1<<s2;
  i = 0;
  while(i<p)
  {
      sum = 0;
      k = 0;
      flag = 0;
      while(k<s2)
      {
          if(i&1<<k)
          {
             sum+=arr2[k];
             flag = 1;
          }
          k++;
      }
      if(flag==1)
      {
          sb.pb(sum);
          if(sum>=a&&sum<=b)
            cb++;
      }
      i++;
  }
  ans = ca+cb;
  sort(sa.begin(),sa.end());
  sort(sb.begin(),sb.end());
  for(i=0;i<sa.size();i++)
  {
      x = sa[i];
      sum1 = b-x;
      sum2 = a-x;
      std::vector<ll>::iterator low,up;
      low=std::lower_bound (sb.begin(), sb.end(),sum2);
      up= std::upper_bound (sb.begin(), sb.end(),sum1);
      l1 = up-sb.begin();
      l2 = low-sb.begin();
      ans+=(l1-l2);
  }
  if(a<=0&&b>=0)
    ans++;
  cout<<ans<<endl;
  return 0;
}
