#include <stdio.h>
#include <math.h>

int main() {
	double A[10] = {15.0, 101.0, 132.0, 70.0, 71.0, 72.0, 90.0, 94.0, 999.0,4.0};
	double avg;
	int i;

	for (i = 0; i < 10; i++) {
		avg += sqrt(A[i]) / 10;
	}
	printf("The average of the squareroots is %lf\n", avg);
	return 0;
}
