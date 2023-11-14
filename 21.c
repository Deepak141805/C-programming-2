//logical operators
#include<stdio.h>
main()
{
	int a=6,b=5,c=10,d,v,h;
	d=(a==b) && (c>b);
	printf("the (a==b) && (c>b) = %d",d);
	v=(a==b) || (c>b);
	printf("\nthe (a==b) || (c>b) = %d",v);
	h=!(a==b);
	printf("\nthe (a!=b) = %d",h);
}
