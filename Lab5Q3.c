#include<stdio.h>
main()
{
	int a,b,c, discriminant;
	printf("Enter value of a, b, c:");
	scanf("%d %d %d",&a,&b,&c);
	discriminant = b * b -4 * a * c;
	if (discriminant > 0)
	{
		printf("Two real roots");
	}
	if (discriminant == 0)
	{
		printf("One real root");
	}
	if (discriminant < 0)
	{
		printf("Imaginary roots");
	}
}
