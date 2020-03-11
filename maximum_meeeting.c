
/*b) There is one meeting room in a firm. There are N meetings in the form of (Si, Fi) where Si is the start time of meeting i and Fi is finish time of meeting i.
The task is to find the maximum number of meetings that can be accommodated in the meeting room. Print all meeting numbers*/

#include<stdio.h>
void selec_sort(int a[],int b[],int n)
{
    int bele;

	for(int i=0;i<n-1;i++)
	{
		 bele=b[i];
		int small=a[i];
		int pos=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<small)
			{
				bele=b[j];
				small=a[j];
				pos=j;
			}
		}
		int temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
		
		int tempb=b[i];
		b[i]=b[pos];
		b[pos]=tempb;
	}
}
int main()
{
	int n;
	
	
	printf("Enter the total no of meetings\n");
	scanf("%d",&n);
	int si[n],fi[n],rs[n],rf[n],p[n];
	printf("Enter the start times\n");
	for(int i=0;i<n;i++)
		scanf("%d",&si[i]);
	printf("Enter the finish times\n");
	for(int i=0;i<n;i++)
		scanf("%d",&fi[i]);
	selec_sort(fi,si,n);

	rs[0]=si[0];
	rf[0]=fi[0];
	int f=0;
	int s=0;
	p[0]=1;
	for(int i=1;i<n;i++)
	{
		if(rf[f]<=si[i])
		{
			rs[++s]=si[i];
			rf[++f]=fi[i];
		       p[s]=i+1;
		}
	}
	printf("Max no.of meetings are : %d",s+1);
	printf("The meeting numbers after sorting are : ");
	for(int i=0;i<=s;i++)
	{
		printf("position %d",p[i]);
	printf("\n");
	
		printf("%d ", rs[i]);
		printf("%d ",rf[i]);
	}
	return 0;
}
