#include <bits/stdc++.h>

#define wt while(t--)
#define fast ios_base::sync_with_stdio(false)

typedef long long int ll;

using namespace std;

int n,m;
int arr[3000][3000];

bool isSafe(ll i,ll j)
{
    if(i>=0&&i<n&&j>=0&&j<m)
        return true;
    return false;
}

int bfs(ll i,ll j)
{
    if(arr[i][j]==0)
        return 0;
    else
    {
        arr[i][j]=0;
        ll x = 1;
        if(isSafe(i+1,j))
            x+=bfs(i+1,j);
        if(isSafe(i-1,j))
            x+=bfs(i-1,j);
        if(isSafe(i,j-1))
            x+=bfs(i,j-1);
        if(isSafe(i,j+1))
            x+=bfs(i,j+1);
        return x;
    }
}

int main()
{
  fast;
  while(true)
  {
      cin>>n>>m;
      if(n!=0&&m!=0)
      {
          map<int,int> mp;
          set<int> s;
          vector<int> v;
          int x,i,j,c=0;
  for(i=0;i<n;i++)
  {
      for(j=0;j<m;j++)
        cin>>arr[i][j];
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<m;j++)
      {
          if(arr[i][j]==1)
          {
              x = bfs(i,j);
              s.insert(x);
              c++;
              mp[x]+=1;
          }
      }
  }
  for (std::set<int>::iterator it=s.begin(); it!=s.end();it++)
  {
      v.push_back(*it);
  }
  sort(v.begin(),v.end());
  cout<<c<<"\n";
  for(i=0;i<v.size();i++)
  {
      cout<<v[i]<<" "<<mp[v[i]]<<"\n";
  }
      }
      else
        break;
  }
  return 0;
}
