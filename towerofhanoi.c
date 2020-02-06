
#include<stdio.h>

#include<math.h>
void towers(int,char,char,char);

int main()
{
		int num; 
		printf("enter the number of discs\n");
		scanf("%d",&num);
		printf("shifting of discs in tower of hanoi are:\n");
		towers(num,'a','c','b');
		return 0;
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
		if(num==1)
		{
		printf("move disc 1 from %cto %c", frompeg,topeg);
		return;
		}
		towers(num-1,frompeg, auxpeg, topeg);
		printf("move disc %d from peg %c to peg %c \n", num, frompeg, topeg);
		towers(num-1, auxpeg,topeg , frompeg);
}
