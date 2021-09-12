#include <stdio.h>

int main() {

	int i,j,w,h;

	printf("enter the width of the rectangle\n");
	scanf("%d", &w);
	
	printf("enter the heigth of the rectangle\n");
	scanf("%d", &h);

	for(i=0;i<h;i++) {
		for(j=0;j<w;j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
