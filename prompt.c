//Prompt
#include <stdio.h>

int main()
{
	char c;
	printf("Enter 1st character: ");
	while((c=getchar())=='\n');
	printf("You Entered : %c\n",c);
/*
	while(getchar()!='\n');

	printf("Enter 2nd character : ");
	while((c=getchar())=='\n');
	printf("You Entered : %c\n",c);*/
	return 0;
}

