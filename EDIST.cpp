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

ll ans[3000][3000];

int main()
{
  fast;
  ll t,j,n,r,x,y,i,flag;
  string s,p;
  cin>>t;
  wt
  {
      cin>>s;
      cin>>p;
      for(i=0;i<=s.length();i++)
      {
          ans[0][i]=i;
      }
      for(i=0;i<=p.length();i++)
      {
          ans[i][0]=i;
      }
      for(i=1;i<=s.length();i++)
      {
          for(j=1;j<=p.length();j++)
          {
              if(s.at(i-1)==p.at(j-1))
              {
                  ans[i][j]=ans[i-1][j-1];
              }
              else
              {
                  ans[i][j] = 1+min(min(ans[i-1][j],ans[i][j-1]),ans[i-1][j-1]);
              }
          }
      }
      cout<<ans[s.length()][p.length()]<<"\n";
  }
  return 0;
}
