#include<iostream>
using namespace std;
int pow(int m,int n)
{
	if(n==0)
	{
		return 1;
	}
	if(n%2==0)
	{
		return pow(m*m,n/2);
	}
	else
	{
		return m*pow(m*m,(n-1)/2);
	}

}
// the above method reduces the number of multiplication, the number of multiplication is 6 times//

//the method below pow1 also perform the same , but in this case the number of multiplication is n times, 
//here n = 9  

int pow1(int m,int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return pow(m,n-1)*m;
	}
}

int main()
{
	cout<<pow1(2,9);
}
