// Rolling dice program
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	char a='y';
	while (a=='y' || a=='Y') {
		srand(time(NULL));
		int n = (rand()%11)+2;
		/*if (n>12 || n==0)
			continue;*/
		printf("\nDice Rolled: %d\n", n);
		printf("Do you want to roll again ? (y/n): ");
		scanf(" %c", &a);
	}
	printf("Exiting...\n");
	return (0);
}
