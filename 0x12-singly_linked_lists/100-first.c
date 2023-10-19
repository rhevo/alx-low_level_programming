#include <stdio.h>

/**
 * printLines - prints lines
 */
void printLines(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * setup - setup function to execute before main
 */
void __attribute__((constructor)) setup(void)
{
	printLines();
}
