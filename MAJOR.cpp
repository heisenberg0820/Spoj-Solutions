#include <bits/stdc++.h>

using namespace std;

int main()
{
	std:ios::sync_with_stdio(false);
	int t,n,i,j,flag,k;
    cin>>t;
    while(t--)
    {
    	int arr[2001]={0};
    	cin>>n;
    	i = 0;
    	while(i<n)
    	{
    	  cin>>k;
		  if(k<0)
		   k = 1000-k;
		  arr[k]+=1;
		  i++; 	
		}
		i = 0;
		flag = 0;
		while(i<=2000)
		{
			if(arr[i]>(n/2))
			{
				if(i>=1000)
				 j = 1000-i;
				else
				 j = i; 
				flag = 1; 
			}
			i++;
		}
		if(flag==1)
		 cout<<"YES "<<j<<endl;
		else
		 cout<<"NO"<<endl;
	}
}
