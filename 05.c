#include <stdio.h>

void main() {
	int i = 0;

	while (i < 5) {
	  printf("%d\n", i);
	  i++;
	}

	printf("\nDO-WHILE NOW:");
	int j = 0;

	do {
	  printf("%d\n", j);
	  j++;
	}
	while (j < 5);

	printf("\nFOR-LOOP NOW:");
	for (i = 0; i <= 10; i = i + 2) {
	  printf("%d\n", i);
	}
}
