#include <stdio.h>

int main() {

	int r;
	double area;

	printf("enter a radius\n");
	scanf("%i", &r);
	area = (r*r)*3.14149;

	printf("the area of a circle with %i radius is %f\n", r,area);

	return 0;
}
