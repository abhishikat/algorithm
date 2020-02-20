
//LINEAR SEARCH USING RECURSSION IN C LANGUAGE


#include <stdio.h>
#include<time.h>
int recSearch(int arr[], int l, int r, int x) 
{ 
     if (r < l) 
        return -1; 
     if (arr[l] == x) 
        return l; 
     if (arr[r] == x) 
        return r; 
     return recSearch(arr, l+1, r-1, x); 
}

int main(void) {
    int t;
printf("enter test cases");
    scanf("%d",&t);
    while(t--)
    {
        
        int z,arr[100];
printf("enter z");
        scanf("%d",&z);
printf("enter array elements");
        for(int i=0;i<z;i++)
        {
            scanf("%d",&arr[i]);
            
        }
        int x;
printf("enter x");
        scanf("%d",&x);
          int n = sizeof(arr)/sizeof(arr[0]); 

         clock_t t; 
    t = clock();
        int index = recSearch(arr, 0, n-1, x); 
        if (index = -1) 
          { printf("Element  is present  "); }
        else
            {printf("Element is not present"); }
t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  
    printf("selectionsort() took %f seconds to execute \n", time_taken); 

    }

    
    return 0; 
   
}
