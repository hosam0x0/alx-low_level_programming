#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: charcter to be cheched
 *
 * Return: 1 if charcter is aletter,0 if a charcter is  not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
