#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int e, f;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	e = f = 0;

	while (s1[e] != '\0')
		e++;
	while (s2[f] != '\0')
		f++;
	conc = malloc(sizeof(char) * (e + f + 1));

	if (conc == NULL)
		return (NULL);
	f = e = 0;
	while (s1[e] != '\0')
	{
		conc[e] = s1[e];
		e++;
	}
	while (s2[f] != '\0')
	{
		conc[e] = s2[f];
		e++, f++;
	}
	conc[e] = '\0';
	return (conc);
}
