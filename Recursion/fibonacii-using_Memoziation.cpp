#include<iostream>
using namespace std;

// the below line of code is fibonacci using iteration , time complexity is o(n)

int fib(int n)
{
	int t0=0,t1=1,s;
	if(n<=1)
	{
		return n;
	}

	else
	for(int i=2;i<=n;i++)
	{
 		s=t0+t1;
 		t0=t1;
 		t1=s;
	}
return s;
}



// the below line of code is fibonacci recursion, time complexity is o(2^n)

int rfib(int n)
{
	
	if(n<=1)
	{
		return n;
	}
	else
	{
		return rfib(n-2)+rfib(n-1);
		
		
	}
	
}


// the below line of code is using memoization in which time complexity is o(n)

// Memoization-> Holding the result so that avoid excessive call. 

int F[10];
int mfib(int n)
{
	if(n<=1)
	{
		F[n]=n;
		return n;	
	}
	else
	{
		if(F[n-2]==-1)
		{
			F[n-2]=mfib(n-2);
			
		}
		if(F[n-1]==-1)
		{
			F[n-1]=mfib(n-1);
			
		}
		
		return mfib(n-2)+mfib(n-1);	
	}	
}


main()
{
	for(int i=0;i<10;i++)
	{
		F[i]=-1;	
	}
cout<<mfib(5);
}

