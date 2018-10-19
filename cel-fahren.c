#include <stdio.h>

main()
{
	/*initialize the variables*/
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahrenheit\tCelsius\n");

	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%.0f\t\t%.2f\n", fahr, celsius);
		fahr += step;
	}

	printf("Celsius\t\tFahrenheit\n");

	float cfhar;
	float fcelsius = lower;

	while (fcelsius <= upper)
	{
		cfhar = (9 * fcelsius) / 5 + 32;
		printf("%.0f\t\t%.2f\n", fcelsius, cfhar);
		fcelsius += step;
	}
	getch();
}