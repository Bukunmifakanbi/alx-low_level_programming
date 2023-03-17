#include <stdio.h>
/**
 * main - print sizes of data size in c
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsined long)sizeof(a));
	printf("Size of a int: %lu byte(S)\n", (unsined long)sizeof(b));
	printf("Size of a long int: %lu byte(S)\n", (unsined long)sizeof(c));
	printf("Size of a long long int: %lu byte(S)\n", (unsined long)sizeof(d));
	printf("Size of a float: %lu byte(S)\n", (unsined long)sizeof(a));
	return (0);
}
