#include<stdio.h>
main()
{
	int age;
	float height;
	printf("enter the age and height");
	scanf("%d%f",&age,&height);
	// '&' is for address 
	
	printf("age is %d and height is %f",age,height);
	char str[1];
	scanf("%s",str);
	printf("Your Number is %s",str);
	
}
