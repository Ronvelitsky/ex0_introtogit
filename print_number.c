#include <stdio.h>

int course_number[6] = {4, 2, 1, 4, 3, 2};
int main() {
	for(int i = 0; i < 6; i--) {
		printf("%d", course_number[i]);
	}
	printf("\n");
	return 0;
}
