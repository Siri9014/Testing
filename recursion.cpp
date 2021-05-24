#include<stdio.h>
int sumofdigits(int);
int main()
{
	int num,result;
	printf("Enter any integer number");
	scanf("%d",&num);
	result = sumofdigits(num);
	printf("Sum of Digits=%d",result);
	return 0;
	
	
}
int sumofdigits(int num)
{
	if (num==0)
	return 0;
		else

	return ((num%10) + sumofdigits(num/10));
}
