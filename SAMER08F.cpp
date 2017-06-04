#include <iostream>

using namespace std;

int main()
{
    long long int n,o;
    while(true)
    {
        cin >> n;
        o = (n*(n+1)*((2*n)+1))/6;
        if(o>0)
          cout<<o<<endl;
        else if(o==0)
            break;
    }
}
