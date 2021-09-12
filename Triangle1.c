#include <stdio.h>

int main() {

	int i,j,h;

	printf("enter the height of the triangle\n");
	scanf("%d", &h);

	for(i=0;i<h;i++) {
		for(j=0;j<=i;j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
