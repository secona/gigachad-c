#include <stdio.h>

int main() {
	char name1[] = "World";
	char name2[] = "Vito";

	printf("name1 = %s\n", name1);
	printf("name1 points to %p\n", name1);
	printf("\n");

	printf("name2 = %s\n", name2);
	printf("name2 points to %p\n", name2);
	printf("\n");

	name2[0] = 'B';
	printf("name2[0] = 'B';\n");
	printf("name2 becomes %s\n", name2);
	printf("\n");

	printf("sizeof(name1) = %ld\n", sizeof(name1));
	printf("sizeof(name1[0]) = %ld\n", sizeof(name1[0]));
	printf("\n");

	int length = sizeof(name1) / sizeof(name1[0]);
	for (int i = 0; i < length; i++) {
		printf("index %d is %c\n", i, name1[i]);
	}
	printf("\n");

	char result[sizeof(name1) + sizeof(name2) - 1];
	for (int i = 0; i < sizeof(name1) - 1; i++) {
		result[i] = name1[i];
	}
	for (int i = 0; i < sizeof(name2) - 1; i++) {
		result[sizeof(name1) + i - 1] = name2[i];
	}

	printf("name1 + name2 = %s\n", result);

	return 0;
}
