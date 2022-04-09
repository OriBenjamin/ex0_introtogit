#include <stdio.h>
#define ARRAY_LENGTH 6

int course_number[ARRAY_LENGTH] = {4, 2, 1, 4, 3, 2};
int main() {
	for(int i = ARRAY_LENGTH-1; i >= 0; i--) {
		printf("%d", course_number[i]);
	}
	printf("\n");
	return 0;
}
