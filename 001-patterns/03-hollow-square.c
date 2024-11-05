#include <stdio.h>

#define SIZE 10

int main() {
	for (int i = 0; i < SIZE; i++) {
		printf("* ");
	}

	printf("\n");

	for (int i = 0; i < SIZE - 2; i++) {
		printf("* ");

		for (int j = 0; j < SIZE - 2; j++) {
			printf("  ");
		}

		printf("* \n");
	}

	for (int i = 0; i < SIZE; i++) {
		printf("* ");
	}

	printf("\n");

	return 0;
}
