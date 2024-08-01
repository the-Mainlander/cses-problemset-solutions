#include<bits/stdc++.h>
using namespace std;

//use ctrl+shift+b to run

int main()
{
	long long int n,s=0;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int t;
		cin>>t;
		s+=t;
	}
	cout<<n*(n+1)/2-s;
}
