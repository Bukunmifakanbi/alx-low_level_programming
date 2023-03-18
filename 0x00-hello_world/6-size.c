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

	printf("Size of a char: %ld byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %ld byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %ld byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %ld byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %ld byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
