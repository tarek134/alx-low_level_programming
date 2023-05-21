#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a c programe that use sizeof function
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	printf("Size of a char: %lu byts\n", sizeof(char));
	printf("Size of an int: %lu byts\n", sizeof(int));
	printf("Size of a long int: %lu byts\n", sizeof(long int));
	printf("Size of a long longint: %lu byts\n", sizeof(long long int));
	printf("Size of a float: %lu byts\n", sizeof(float));
	return (0);
}
