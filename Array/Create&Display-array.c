#include<stdio.h>
#include<stdlib.h>
struct Array
{
	int *A;
	int size;
	int length;	
};
void display(struct Array arr)
{
	int i;
	printf("\nElements are \n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}


int main()
{
	int n,i;
	struct Array arr; // intialise
	printf("Enter the size of a Array");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("Enter the number of number");
	scanf("%d",&n);
	printf("Enter all element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr.A[i]);	
	}
	arr.length=n;
	display(arr);

}
