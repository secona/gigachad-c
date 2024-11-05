#include <stdio.h>

#define HEIGHT 10

int main() {
	for (int i = 1; i <= HEIGHT; i++) {
		for (int j = 0; j < HEIGHT - i; j++) {
			printf("  ");
		}

		for (int j = 0; j < i; j++) {
			printf("* ");
		}

		printf("\n");
	}

	return 0;
}
