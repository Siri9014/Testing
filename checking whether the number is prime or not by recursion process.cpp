#include<stdio.h>
int isprime(int,int);

int main ()
{
	int num,prime;
	printf("Enter the any number :");
	scanf("%d",&num);
 prime = isprime(num,num/2);
 		if(prime==1)
		printf("\n %d is prime number :",num);
		else 
		printf("\n %d is not a prime  number :",num);
			return 0;
}


int isprime(int num,int i)
{
	if(i==1)
	{
		return 1 ;
	}
	else
	{
		if(num%i==0)
		return 0;
		else 
		isprime(num,i-1);
	}
	}

