#include <stdio.h>

int main() {

	float average(int lngth, int array[]) {
		int sum=0;
		for(int i=0;i<lngth;i++){
			sum = sum+array[i];
		}
		return sum / (float)lngth;
	}

	int total;
	printf("let me calculate the average of your scores ;)\n********\n");
	
	printf("how many scores you have?\n");
	scanf("%d", &total);

	int scores[total];

	for(int i=0; i<total;i++){
		printf("score %d:\n", i+1);
		scanf("%d", &scores[i]);
		
	}

	printf("the average of your scores is: %f\n", average(total,scores));

	return 0;
}
