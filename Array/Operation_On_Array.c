#include<stdio.h>
struct Array
{
	int A[10];
	int size;
	int length;
};
void insert_in_Sorted(struct Array *arr,int x)
{
	int i=arr->length-1;
	if(arr->length==arr->size)
	{
		return;
	}
	while(i>=0 && arr->A[i]>x)
	{
		arr->A[i+1]=arr->A[i];
		i--;
	}
	arr->A[i+1]=x;
	arr->length++;
}


void display(struct Array *arr)
{
	int i;
	for(i=0;i<arr->length;i++)
	{
		printf("%d",arr->A[i]);
	}
}


int  check_Sorted(struct Array *arr)
{
	int i;
	for(i=0;i<arr->length-2;i++)
	{
		if(arr->A[i]>arr->A[i+1])
		{
			return 0;
		}
	}
	return 1;
}


void swap(int *x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;	
}


void seprate(struct Array *arr)
{
	int i;
	int j=arr->length-1;
	while(i<j)
	{
		while(arr->A[i]<0)
		{
			i++;
		}
		while(arr->A[j]>0)
		{
			j--;
		}
		if(i<j)
		{
		swap(&arr->A[i],&arr->A[j]);
		}
	}
}



int main()
{
	struct Array arr ={{2,-1,4,-3,-7,8,9},10,7};
//	insert_in_Sorted(&arr,3);
//	printf("%d ",check_Sorted(&arr));
	seprate(&arr);
	printf("\n");
	
	display(&arr);
}
