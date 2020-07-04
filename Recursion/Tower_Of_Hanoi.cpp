#include<iostream>
using namespace std;
//void TOH(int n,int A,int B,int C)
//{
//	if(n>0)
//	{
//		TOH(n-1,A,C,B);
//		cout<<"( "<<A<<","<<C<<" )"<<"\n";
//		TOH(n-1,B,A,C);
//	}	
//}

int f(int n)
{
	
	static int i=1;
	if(n>=5)
	{
		return n;
	}
	n=n+i;
	i++;
	return f(n);
}
main()
{
//	TOH(3,1,2,3);
cout<<f(1);


	
	
	
}
