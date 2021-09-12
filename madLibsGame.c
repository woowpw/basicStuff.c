#include <stdio.h>

int main() {

	char color[20];
	char pluralNoun[20];
	char celebrity[20];

	printf("enter a color:\n");
	scanf("%s", color);

	printf("enter a plural noun:\n");
	scanf("%s", pluralNoun);
	
	printf("enter a celebrity:\n");
	scanf("%s", celebrity);

	printf("\n\nRoses are %s\n", color);
	printf("%s are %s\n", pluralNoun, color);
	printf("I love %s\n", celebrity);

	return 0;
}
