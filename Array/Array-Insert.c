#include<stdio.h>
#include<conio.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

void append(struct Array *arr, int x)
{
	if(arr->length<arr->size)
	{
		arr->A[arr->length++]=x;
	}
}
void display(struct Array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}

void insert(struct Array *arr,int index ,int x)
{
	int i;
	if(index>=0&&index<=arr->length)
	{
		for(i=arr->length;i>index;i--)
		{
			arr->A[i]=arr->A[i-1];
		}
		arr->A[index]=x;
		arr->length++;
	}
}

int  deletee(struct Array *arr,int index)
{
	int x;
	x=arr->A[index];
	int i;
	if(index>0 && index<=arr->length)
	{
		for(i=index;i<arr->length-1;i++)
		{
			arr->A[i]=arr->A[i+1];
		}
		arr->length--;
		return x;
	}
	return 0;
	
}
main()
{
	struct Array arr={{1,2,3,4,5},10,5};
	
//	 append(&arr,10);
//insert(&arr,2,12);
printf("%d \n",deletee(&arr,2));
	 display(arr);
}

