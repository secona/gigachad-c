#include <stdio.h>
#include "main.h"

void print_user(struct user_t *u) {
	printf("name=%s, age=%d\n", u->name, u->age);
}

void increment_age(struct user_t *u) {
	u->age++;
}

int main() {
	struct user_t u = {"Vito", 19};
	print_user(&u);

	increment_age(&u);
	print_user(&u);
}
