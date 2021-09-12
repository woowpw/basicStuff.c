#include <stdio.h>

int main() {
	
	int a,b,result,s;

	printf("Enter the first number\n");
	scanf("%d", &a);

	printf("Enter the second number\n");
	scanf("%d", &b);

	printf("\n\n\n\t 1- sum \n\t 2- sus \n\t 3- mul \n\t 4- div \n\t 5- mod \n");

	scanf("%d", &s);	
	
	switch(s){
		case 1: result = a+b;
		break;
	
		case 2: result = a-b;
		break;
	
		case 3: result = a*b;
		break;

		case 4: result = a/b;
		break;

		case 5: result = a%b;
		break;

		default: printf("unknown choice!\n");
		break;
	};

	printf("result is: %i\n", result);
	return 0;
}
