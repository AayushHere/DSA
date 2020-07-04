#include<iostream>
using namespace std;
int fun(int n)
{
	if(n>0)
	{
		cout<<n;
		fun(n-1);
		fun(n-1);
		cout<<n;
	}
return 0;
}

// 	he above function i.e fun calling itself two times, Time complexity is order is O(2^n) because fun()
// function calling itself two time with a reduce value by 1

int main()
{
	int x=3;
	fun(3);
}
