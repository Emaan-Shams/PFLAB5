#include<stdio.h>
main()
{
	int power;
	char light;
	printf("Is the power on?(1.Yes, 2.No)");
	scanf("%d", &power);
	switch(power)
	{
		case 1:
			printf("What colour is the light?(R-Red, Y-Yellow, G-Green)");
			scanf(" %c", &light);
			switch(light)
			{
				case ('R'):
					printf("Stop");
				break;
				case ('Y'):
					printf("Caution");
				break;
				case ('G'):
					printf("Go");
				break;
			}
		break;
		case 2:
			printf("No Signal.");
		break;
	}
}
