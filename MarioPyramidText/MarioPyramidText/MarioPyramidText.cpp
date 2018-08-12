#include "stdafx.h"

int main()
{
	int x;

	do{
	printf("Plesae enter a height between 0 and 23. \n");
	scanf_s("%d", &x);
	} while (x < 0 || x > 23);

	for (int i = 0; i <= x; i++) {
		for (int z = x; z > i; z--) {
			printf(" ");
		}

		for (int y = 0; y < i; y++) {
			printf("#");
		}

		printf("  ");
		for (int y = 0; y < i; y++) {
			printf("#");
		}
		printf("\n");
	}

	scanf_s("%d", &x);

    return 0;
}