#include<stdio.h>
struct Array 
{
	int A[10];
	int size;
	int length;	
};

int get(struct Array arr,int index)
{
	if(index>=0&&index<=arr.length)
	{
		return arr.A[index];
	}
}

int set(struct Array *arr,int index,int x)
{
	if(index>=0&&index<=arr->length)
	{
		return arr->A[index]=x;
	}
}
void display(struct Array arr)
{	
	int i;
	for( i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}
int max(struct Array arr)
{
	int max = arr.A[0];
	int i;
	for(i=0;i<arr.length;i++)
	{
		if(arr.A[i]>max)
		{
			max=arr.A[i];
		}
	}
	return max;
}
int min(struct Array *arr)
{
	int i;
	int min=arr->A[0];
	for(i=0;i<arr->length;i++)
	{
		if(arr->A[i]<min)
		{
			min=arr->A[i];
		}
	}
	return min;
}
int sum(struct Array *arr)
{
	int i,total=0;
	for(i=0;i<arr->length;i++)
	{
		total=total+arr->A[i];
	}
	return total;
}

int main()
{
	struct Array arr={{1,2,3,10,5,6},10,6};
//	printf("%d",get(arr,3));
	printf("%d",set(&arr,3,4));
	printf("\n");
	display(arr);
	printf("\n");
	printf("%d",max(arr));
	printf("\n");
	printf("%d",min(&arr));
	printf("\n");
	printf("%d",sum(&arr));
	
}


