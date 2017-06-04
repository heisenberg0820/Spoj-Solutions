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

ll ans[1000000];

int main()
{
  fast;
  ll t,l,n,r,x,y,i,flag;
  string s;
  l = 0;
  cin>>t;
  wt
  {
      ll m1[100000]={0};
      ll m2[100000]={0};
      flag = 1;
      cin>>n>>r;
      while(r--)
      {
          cin>>x>>y;
          if(m2[x]>0||m1[y]>0)
          {
              flag = 0;
          }
          else
          {
              m1[x]=1;
              m2[y]=1;
          }
      }
      ans[l++]=flag;
  }
  i = 0;
  while(i<l)
  {
      if(ans[i]==1)
        s = "spying";
      else
       s = "spied";
      cout<<"Scenario #"<<i+1<<": "<<s<<endl;
      i++;
  }
  return 0;
}
