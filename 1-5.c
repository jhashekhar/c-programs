#include<stdio.h>

/* symbolic constants */
#define LOWER 0       /* lower limit of table */
#define UPPER 300	    /* upper limit of table */
#define STEP 20       /* step size */

main()
{
	int fahr, celsius;

	fahr = UPPER;

	while (fahr >= LOWER) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr -= STEP;
	}
	getch();
}
