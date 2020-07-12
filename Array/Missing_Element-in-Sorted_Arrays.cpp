#include<iostream>
using namespace std;
int main()
{
	int n,s,res;
	cout<<"Enter the size of an Array";
	cin>>n;
	int A[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int l=A[0];
	int diff= l-0;
//	for(int i=0;i<n-1;i++)
//	{
//	sum=sum+A[i];	
//	}
//	s=n*(n+1)/2;
//	cout<<s<<"\n"<<sum;
//	
//	res= s-sum;
//	cout<<"Missing Element is "<<res;
//	for(int i=0;i<n;i++)
//	{
//		if(A[i]-i!=diff)      // if only one element is miising 
//		{
//			cout<< "Missing Element is " <<diff+i;
//			break;
//		}
//	}
	for(int i=0;i<n;i++)
	{
		if(A[i]-i!=diff)
		{
			while(diff<A[i]-i)
			{
				cout<<"Missing element is "<<i+diff<<"\n";
				diff++;
			}
		}
	}	
}




