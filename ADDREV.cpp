#include <iostream>

using namespace std;

int main()
{
    int t,a,b,ra,rb,rc,c;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        ra = 0;
        rb = 0;
        while(a>0)
        {
            ra = ra*10 +(a%10);
            a=a/10;
        }
        while(b>0)
        {
            rb = rb*10 +(b%10);
            b=b/10;
        }
        c = ra+rb;
        rc = 0;
        while(c>0)
        {
            rc = rc*10 +(c%10);
            c=c/10;
        }
        cout << rc << endl;
    }
}
