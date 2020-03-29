/*) Given an array of 0s and 1s, If any particular index i has value 1 then it is a safe index and if the value is 0 then it is an unsafe index. A man is standing at index -1(source) can only land on a safe index and he has to reach the Nth index (last position). At each jump, the man can only travel a distance equal to any Fibonacci Number. You have to minimize the number of steps, provided man can jump only in forward direction*/



#include <stdio.h> 

#define MAX 1e9 
int min(int num1, int num2) ;
int minJumps(int arr[], int N) ;
int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}

int minJumps(int arr[], int N) 
{ 
   
    int fib[30]; 
    fib[0] = 0; 
    fib[1] = 1; 
    for (int i = 2; i < 30; i++) 
        fib[i] = fib[i - 1] + fib[i - 2]; 
    int DP[N + 2]; 
    DP[0] = 0; 
    for (int i = 1; i <= N + 1; i++) 
        DP[i] = MAX; 
    for (int i = 1; i <= N + 1; i++) { 
  
        
        for (int j = 1; j < 30; j++) { 
  
            if ((arr[i - 1] == 1 || i == N + 1) && i - fib[j] >= 0) 
                DP[i] = min(DP[i], 1 + DP[i - fib[j]]); 
        } 
    } 
  
    if (DP[N + 1] != MAX) 
        return DP[N + 1]; 
    else
        return -1; 
}

int main() 
{ 
    int arr[] = { 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("minimum jumps=%d", minJumps(arr, n)); 
    return 0; 
} 
