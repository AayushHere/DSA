#include<iostream>
using namespace std;
double  e(int x, int n)
{

	static double s=1;
	if(n==0)
	{
		return s;
	}
	else
	{
		s=1+x*s/n;                       // (1+x/n*s),this will return the answer in integer type
		return e(x,n-1);
	}
}

// the above function is recursive function 

// let's code iterative function

double e(int x,int n)
{

	double  s=1;
	int i=1;
	double num =1;
	double den =1;
	for(i=1;i<=n;i++)
	{
		num= num*x;
		den=den*i;
		s=s+num/den;
	}
return s;
} 

main()
{

cout<<e(1,2);
}
