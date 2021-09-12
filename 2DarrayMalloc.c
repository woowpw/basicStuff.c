#include <stdio.h>
#include <stdlib.h>

int main() {

	int row, column, i, j;

	printf("How many rows in your array?\n");
	scanf("%d", &row);

	printf("How many columns in your array?\n");
	scanf("%d", &column);
	
	int **x = (int **)malloc(row * sizeof(int *));

	for(i=0; i<row; i++) {
		x[i] = (int *)malloc(column * sizeof(int));
	}

	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("enter the value %d in the row %d\n", j+1, i+1);
			//scanf("%d", *(*(x+i)+j));
			scanf("%d", &x[i][j]);
		}
	}

	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("[%d][%d] = %d\n", i+1, j+1, *(*(x+i)+j));
		}
	}


	for(i=0; i<row; i++) {
		free(x[i]);
	}
	free(x);
	return 0;
}
