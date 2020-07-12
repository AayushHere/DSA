#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int p;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	p = *max_element(a,a+n);  // this is use to calculate maximum from an array i.e  using STL 
 
	int H[p];				// size of array is the maximum element in array B
	for(int i=0;i<n;i++)
	{
		H[i]=0;				// the value of  all index is 0 
	}
	for(int i=0;i<n;i++)
	{
		H[a[i]]++;             // use hashing
	}
	for(int i=0;i<=p;i++)
	{
		if(H[i]>1)
		{
			cout<<i<<" "<<H[i]<<"times"<<"\n";
		}
	}
	
}
