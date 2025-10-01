#include<stdio.h>
#include<string.h>
main()
{
	char inputusername[20], inputpassword[20];
	char username[] = "25k3082";
	char password[] = "hello123";
	printf ("Enter username:");
	scanf("%s", &inputusername);
	printf("Enter password:");
	scanf("%s", &inputpassword);
	if(strcmp(username, inputusername)== 0)
	{
		if(strcmp(inputpassword,password)==0)
		{
			printf("Log in successful");
		}
		else {
			printf("Incorrect password");
		}
	}
	else {
		printf("Username not found.");
	}
}
