#include <iostream>
#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
	ll t,x,y;
	char c;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		if(x%2==0&&y%2==0&&x<=y)
		 c='L';
		else if(x%2==0&&y%2==0&&x>y)
		 c='U'; 
		else if(x%2==0&&y%2==1&&y>x)
		 c='L'; 
		else if(x%2==0&&y%2==1&&y<x)
		 c='D';
		else if(x%2==1&&y%2==0&&x>y)
		 c='U';
		else if(x%2==1&&y%2==0&&y>x)
		 c='R';
		else if(x%2==1&&y%2==1&&y>=x)
		 c='R';
		else if(x%2==1&&y%2==1&&x>y)
		 c='D';   
		cout<<c<<endl;   
	}
}
