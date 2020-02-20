
#include<stdio.h>

#include<math.h>
#include <time.h>
int binarySearch(int A[], int low, int high, int x)
{
	
	if (low > high)
		return -1;

	int mid = (low + high)/2;
	if (x == A[mid])
		return mid;
	else if (x < A[mid])
		return binarySearch(A, low,  mid - 1, x);

	else
		return binarySearch(A, mid+1,  high, x);
}
int main(void)
{
	int arr[100],target,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&target);

	 n = sizeof(arr)/sizeof(arr[0]);

	int low = 0, high = n - 1;
 clock_t t; 
    t = clock();
	int index = binarySearch(arr, low, high, target);

	if (index = -1)
{
		printf("Element found at index \n");
}
	else
		{
printf("Element not found in the array\n ");
}

t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  
    printf("selectionsort() took %f seconds to execute \n", time_taken); 
		



	return 0;
}
