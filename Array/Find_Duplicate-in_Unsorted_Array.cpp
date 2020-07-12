#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int count=1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int p;

	p = *max_element(a,a+n);

int H[p];


	// Ist Method
//	for(int i=0;i<n-1;i++)
//	{
//			count=1;
//			if(a[i]!=-1)
//			{
//		
//				for(int j=i+1;j<n;j++)
//				{
//					if(a[i]==a[j])
//					{
//						count++;
//						a[j]=-1;
//					}
//				}
//			
//			}
//			if(count>1)
//			{
//				cout<<"Element is "<<a[i]<<count<<" times"<<"\n";	
//			}
//			
//	}
//}

// Time Complexity of above code is O(n^2)


// 2nd Method, In this we use Hash Table

	for(int i=0;i<n;i++)
	{
		H[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		H[a[i]]++;
	}
	for(int i=0;i<p;i++)
	{
		if(H[i]>1)
		{
			cout<<"element is "<<i<<"times "<<H[i]<<"\n";
		}
	}





}











