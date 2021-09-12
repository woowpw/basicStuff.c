#include <stdio.h>

int main() {

	int i,j,l;

	printf("enter the width of the losange\n");
	scanf("%d", &l);

	
	for(i=0;i<=l;i++){
		for(j=0;j<=(l-i);j++) {
			printf(" ");
		}
		for(j=0;j<=l;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
