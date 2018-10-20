/* Text stream is a sequence of characters divided into lines;
   each line consists of zero or more characters followed by a
   newline character.
*/

#include<stdio.h>

main()
{
	int c, d;
	printf("EOF Value");
	d = (getchar() != EOF);
	printf("%d", d);

	while ((c = getchar()) != EOF)
	{
		putchar(c);
		printf("%d", EOF);
	}

}
