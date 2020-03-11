#include <stdio.h>
#include<math.h>
#include <time.h>
/*Sort a given set of N integer elements using Bubble Sort technique and compute its time taken. 
Run the program for different values of N and record the time taken to sort.*/


void bubblesort(int arr[],int n)
{	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);}
}

int main()
{	int n,ch;
	clock_t start, end; 
	printf("enter number of elements");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	//bubble sort - time complexity
  clock_t t; 
    t = clock(); 
	 bubblesort(arr,n);
t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  
    printf("selectionsort() took %f seconds to execute \n", time_taken);
   
	return 0;
}
