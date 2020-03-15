
/*Write an efficient program for printing k largest elements in an array. Elements in the array can be in any order. It is given that all array elements are distinct.*/
#include<stdio.h>
#include<time.h>
void bubblesort(int arr[],int n)
{	int temp, k;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Enter how many largest elements you want to print:");
	scanf("%d",&k);

	for(int i=0;i<k;i++)
	{
		printf("%d",arr[i]);
	}

}

int main()
{	int n,ch;
	clock_t start, end; ;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements\n ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubblesort(arr,n);
	
  
	return 0;
}
