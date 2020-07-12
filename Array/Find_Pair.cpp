#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int n,k;
	cin>>n;
	int a[n];
	cout<<"element want to search";
	cin>>k;

	

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
		int p;
	p = *max_element(a,a+n);
	int H[p];
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			if(a[i]+a[j]==k)
//			{
//				cout<<a[i]<<" "<<a[j] <<" "<<k;			
//			}
//		}


// Time complexity of the above code is O(n^2)


		for(int i=0;i<n;i++)
		{
			H[i]=0;
		}
		for(int i=0;i<n;i++)
		{
			if(H[k-a[i]]!=0 && k-a[i]>0)
			{
				cout<<a[i]<<" "<<k-a[i]<<" "<<k<<" ";
			}
			H[a[i]]++;
		}
}





 
