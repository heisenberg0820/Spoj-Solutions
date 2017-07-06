#include <bits/stdc++.h>

#define wt while(t--)
#define fast ios_base::sync_with_stdio(false)
typedef unsigned long long int ull;
typedef long long int ll;

using namespace std;

ll prefix[1000005];

void calcPre(string p)
{
  ll i,j;
  prefix[0]=0;
  j=0;
  i=1;
  while(i<p.length())
  {
      if(p.at(i)==p.at(j))
      {
          prefix[i]=j+1;
          i++;
          j++;
      }
      else
      {
          if(j!=0)
           j = prefix[j-1];
          else
          {
              prefix[i]=0;
              i++;
          }
      }
  }
}

int main()
{
  ll i,j,k,l,m,n,ans,flag;
  string p;
  while(true)
  {
      cin>>m>>p;
      if(m==-1&&p=="*")
         break;
      calcPre(p);
      n = prefix[p.length()-1];
      n = p.length()-n;
      if(p.length()>m)
        cout<<"0\n";
      else
      {
          ans = (m-prefix[p.length()-1])/n;
         cout<<ans<<endl;
      }

  }
  return 0;
}
