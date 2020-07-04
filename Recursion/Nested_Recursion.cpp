#include<iostream>
using  namespace std;
int fun(int n)
{
 	 if(n>100)
 	 {
	  
	  return n-10;
	  }
	  else
	  {
	  
	  return fun(fun(n+11));  // Nested Recursion
	  }
}

// when a function and inside that function same function calling itself called recursion but In this the
// parameter we passed is again that same function called Nested Recursrion
int main()
{
	int x=95;
	cout<<fun(95);

}
