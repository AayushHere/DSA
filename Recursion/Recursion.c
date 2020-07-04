#include<stdio.h>
#include<conio.h>
void fun(int n)
{
 	if(n>0)
 	{
 		printf("%d ",n);
  		fun(n-1);
 	} 
}
main()
{
 int x=3;
 fun(x);	
}
