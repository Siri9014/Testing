#include<stdio.h>
#include<conio.h>
int lcm(int,int);
int main()
{
	int a,b,result;
	printf("Enter two  numbers");
	scanf("%d %d",&a,&b);
	
	result = lcm(a,b);
	printf(" LCM is %d", result );
	
}


int lcm(int a , int b)
{
	static int m=1;
	if(m%a==0 && m%b==0)
	
	return m;

	m++;
 lcm(a,b);
 return m;
	
}

