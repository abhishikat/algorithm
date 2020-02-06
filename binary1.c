#include<bits/stdc++.h> 
using namespace std; 
int first(int arr[], int low, int high, int x, int n) 
{ 
    if(high >= low) 
    { 
        //int mid = low + (high - low)/2; or
        int mid = (low + high)/2;
        if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x)
            return mid; 
        else if(x > arr[mid]) 
            return first(arr, (mid + 1), high, x, n); 
        else
            return first(arr, low, (mid -1), x, n); 
    } 
    return -1; 
} 

int main() 
{ 
    	int  f , l , i, n, x; 
	cout << "Enter the no. of elements and the key to be searched:";
    	cin >> n >> x; 
    	int arr[n];
	cout << "Enter the elements in sorted order:";
	for(int j=0;j<n;j++)
		cin >> arr[j];
    	f =  first(arr, 0, n-1, x, n);
    	/*l = last(arr, 0, n-1, x, n);*/
    	if(f == -1){
      		cout<<"\nFirst occurance: -1\nLast occurance: -1\nCount: 0"<<"\n";
    	}	
    	else{
      		cout<<"\nFirst Occurrence at index = "<< f;
      		i=f;
	      	while(arr[i]<=x)
	      	{
			i++; 
	      	}
	      	cout<<"\n"<<"Last Occurrence at index = "<<i-1;
	      	cout<<"\n"<<"Count = "<<(i - f)<<"\n"; 
    	}
    return 0; 
}
