#include <stdio.h>
#include <stdlib.h>

int main() {

	int lngth, i;
	float Sum, Avr;

	printf("what's the length of your array?\n");
	scanf("%d", &lngth);

	float *T = malloc(lngth *sizeof(float));
	
	if(T == NULL) {
		printf("memory not allowed\n");
		exit(0);
	}
	else {
		for(i=0;i<lngth;i++) {
			printf("enter the value T[%d]:\n", i+1);
			scanf("%f", (T+i));
		}

		Sum = 0;
		for(i=0;i<lngth;i++) {
			Sum = Sum + *(T+i);
		}

		Avr = Sum/lngth;
		printf("The summary of your array values is: %.2f\n", Sum);
		printf("The average of your array values is: %.2f\n", Avr);

		free(T);
	}
	return 0;
}
