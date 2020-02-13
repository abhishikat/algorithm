// print k largest element in an array;


#include<stdio.h>
//kth largest element in array

int main(void)
{
    int n,a,t,arr[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<arr[i+1])
            {
                a=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=a;
            }
        }
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}

	int k;
scanf("%d",&k);
for(int i=0;i<k;i++)
{
printf("%d\n",arr[i]);
}




	 for(int i=0;i<n;i++)
        {
        printf("LARGEST ELEMENT IN ARRAY IS %d\n", arr[n-1]);
	
        }
    }
return 0;
}

