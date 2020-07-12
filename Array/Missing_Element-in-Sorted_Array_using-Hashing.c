//#include<stdio.h>
//#include<stdlib.h>
//struct Array
//{
//	int *A;
//	int size;
//	int length;	
//};
//
//void Hashing(struct Array arr)
//{
//	int max=arr.A[0];
//	int *H,i,j,k,t;
//	for( i=0;i<arr.length;i++)
//	{
//		if(max<arr.A[i])
//		{
//			max=arr.A[i];
//		}
//	}
//	printf("%d",max);
//	
//	H = (int*)malloc((max+1)*sizeof(int));
//	int n=max+1;
//	for( t=0;t<n;t++)
//	{
//		H[t]=0;
//	}
//	for( j=0;j<n;j++)
//	{
//		H[arr.A[j]]++;
//	}
//	for(k=0;k<n;k++)
//	{
//		if(H[k]==0)
//		{
//			printf("Missing element is %d",k);
//		}
//	}	
//}
//
//
////int main()
////{
////	int i,s,n;
////	struct Array arr;
////	printf("Enter the size of an Array");
////	scanf("%d",&s);
////	arr.A=(int *)malloc(s*sizeof(int));
////	printf("Enter the number of element you want in an array");
////	scanf("%d",&n);
////	printf("Enter the element of an array ");
////	for(i=0;i<n;i++)
////	{
////		scanf("%d",arr.A[i]);
////	}
////	arr.length=n;
////	Hashing(arr);
////		
////}
//
//
//
//
//
//int main()
//{
//    struct Array arr;
//    int s,length,n,i;
//    printf("enter the size of an array\n");
//    scanf("%d",&s);
//    arr.A=(int *)malloc(s*sizeof(int));
//    arr.length=0;
//    printf("enter the number of elements in an array\n");
//    scanf("%d",&n);
//    printf("enter the Elements\n");
//    for(i=0;i<n;i++)
//        scanf("%d",&arr.A[i]);
//    arr.length=n;
//    Hashing(arr);
//    return 0;
//}


#include<stdlib.h>
#include<stdio.h>
struct Array
{
    int *A;
    int size;
    int length;
};
void SingleMissing1(struct Array arr,int n)
{
    int sum=0,i,s;
   for(i=0;i<arr.length;i++)
        sum+=arr.A[i];
    s=n*(n+1)/2;
    printf("Missing element is %d\n",s-sum);
}
 
void SingleMissing2(struct Array arr)
{
    int diff=0,i;
    diff=arr.A[0]-0;
    for(i=0;i<arr.length;i++)
    {
        if((arr.A[i]-i)!=diff)
        {
            printf("Missing element is %d \n",i+diff);
            break;
        }
    }
}
 
void MultipleMissing(struct Array arr)
{
    int diff=0,i;
   diff=arr.A[0]-0;
    for(i=0;i<arr.length;i++)
   {
        if((arr.A[i]-i)!=0)
        {
            while(diff<(arr.A[i]-i))
            {
                printf("Missing element is %d \n",i+diff);
                diff++;
            }
        }
    }
}
void Hasing(struct Array arr)
{
    int max=arr.A[0],i;
    for(i=1;i<arr.length;i++)
    {
        if(max<arr.A[i])
            max=arr.A[i];
    }
    printf("Max is.....%d",max);
    int *H,n;
    H=(int *)malloc((max+1)*sizeof(int));
    n=max+1;
    for(i=0;i<n;i++)  // initialize the H array
        H[i] = 0;
    printf("Enter the elements in Hash Array \n");
    //for(i=0;i<n;i++)     // Dont read the values...
      //  scanf("%d",&H[i]);
    for(i=0;i<arr.length;i++)
    {
        H[arr.A[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(H[i]==0 && i>0)
        {
            printf("Missing element is %d\n",i);
        }
    }
}
int main()
{
    struct Array arr;
    int s,length,n,i;
    printf("enter the size of an array\n");
    scanf("%d",&s);
    arr.A=(int *)malloc(s*sizeof(int));
    arr.length=0;
    printf("enter the number of elements in an array\n");
    scanf("%d",&n);
    printf("enter the Elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr.A[i]);
    arr.length=n;
    Hasing(arr);
    return 0;
}
 


















