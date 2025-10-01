#include<stdio.h>
main()
{
	int age;
	printf("Enter your age:");
	scanf("%d", &age);
	if (age<5) {
		printf("Free");
	}else if (age > 17 ) {
		if (age > 65) {
			printf("Discount");
		}else {
			printf("Standard");
		}
		}
}
