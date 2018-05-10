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

int main()
{
    ll t,n,ans;
    ll arr[10];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 4;
    arr[3] = 6;
    arr[4] = 5;
    arr[5] = 2;
    cin>>t;
    wt
    {
        cin>>n;
        n = n%6;
        ans = arr[n];
        cout<<ans<<endl;
    }
}


