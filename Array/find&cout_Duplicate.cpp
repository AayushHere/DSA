#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int last_duplicate=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
//	for(int i=0;i<n;i++)
//	{
//		if(a[i]==a[i+1] && last_duplicate!=a[i])
//		{
//			cout<<a[i]<<" ";
//			last_duplicate=a[i];
//		}
//	}
	
	int j;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{
		j=i+1;
		while(a[j]==a[i])
		{
			j++;
		}
		cout<<"Element is "<<a[i]<<" No. of time it is having in tha array is "<<j-i<<"\n";
		i=j-1;
			
		}
	}





}
