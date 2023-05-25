#include "shell.h"

/**
 * _atoi - Converts the string to number
 * @s : Pointer int
 * _atoi: Converts string to number
 * interactive - Returns true if shell is interactive mode
 * @info: structure address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimeter
 * @c: character to check
 * @delim: delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 *_isalpha - checks for alphabetic char
 *@c: character to input
 *Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 *_atoi - converts the string to an integer
 *@s: string to be converted
 *Return: 0 if no numbers in string, converted number otherwise
 */

int _atoi(char *s)
{
	int i;
	int check_num;
	unsigned int sum;
	unsigned int x;
	int neg;

	neg = 0;
	check_num = 0;
	sum = 0;
	i = 0;

	/* run a while loop */
	while (s[i] != '\0')
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if ((s[i] > '9' || s[i] < '0') && check_num > 0)
			break;
		if (s[i] == '-')
			neg++;
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
			check_num++;
		i++;
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}
	i = i - 1;
	x = 1;
	while (check_num > 0)
	{
		sum = sum + ((s[i] - '0') * x);
		x = x * 10;
		i--;
		check_num--;
	}
	if (neg % 2 != 0)
		sum = sum * -1;
	return (sum);

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
