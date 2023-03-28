#include<stdio.h>
int main()
{
	char letter;
	printf("Enter a letter: ");
	scanf("%c",&letter);
	if (letter>='A' && letter<='Z')
		printf("%d is uppercase letter.",letter);
	else
		printf("%d is lowercase letter.",letter)
}
