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
 
ll one[1000001];
ll two[1000001];
ll three[1000001];
ll four[1000001];
string s;
 
void recur()
{
    one[0]=two[0]=three[0]=four[0]=0;
    for(ll i=1;i<=s.length();i++)
    {
        char c = s.at(i-1);
        if(c=='1')
        {
            one[i] = one[i-1]+1;
        }
        else
            one[i] = one[i-1];
        if(c=='8'&&one[i-1]>0)
        {
            two[i] = 1+max(one[i-1],two[i-1]);
        }
        else
            two[i]=two[i-1];
        if(c=='0'&&two[i-1]>0)
        {
            three[i] = 1+max(three[i-1],two[i-1]);
        }
        else
            three[i]=three[i-1];
        if(c=='7'&&three[i-1]>0)
        {
            four[i] = 1+max(four[i-1],three[i-1]);
        }
        else
            four[i]=four[i-1];
    }
}
 
int main()
{
  fast;
  cin>>s;
  recur();
  cout<<four[s.length()]<<endl;
  return 0;
}
