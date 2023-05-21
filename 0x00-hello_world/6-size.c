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
	printf("Size of a char: %u byts\n", sizeof(char));
	printf("Size of an int: %u byts\n", sizeof(int));
	printf("Size of a long int: %u byts\n", sizeof(long int));
	printf("Size of a long longint: %u byts\n", sizeof(long long int));
	printf("Size of a float: %u byts\n", sizeof(float));
	return (0);
}
