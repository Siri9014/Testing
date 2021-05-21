#include<stdio.h>
int main()
{

	float s1, s2, s3, s4, s5 , per ;
	printf("Enter the values of 5 subjects\n");
	scanf("%f %f %f %f %f ", &s1 , &s2 , &s3 , &s4 , &s5);
	per = (s1 + s2 + s3 + s4 + s5)/5.0;
	
	if(per>=60)
	{
	
	printf("Grade A\n");
}
	else
	{
	if(per>= 50)
	{
		printf("Grade B \n"	);
	}
	else 
	{ 
	if ( per>=40)
	{
		printf("Grade C\n");
	}
	else 
	{
		printf("FAiled!\n");
		
	}
}
}
}
