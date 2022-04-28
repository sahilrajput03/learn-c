#include <stdio.h>

void main() {
	int time = 20;
	if (time < 18) {
	  printf("Good day.\n");
	} else {
	  printf("Good evening.\n");
	}

	// Ternary operator
	time < 18 ? printf("Good day 2.") : printf("Good evening 2.");
}
