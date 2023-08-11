#include "shell.h"
/**
 * main - entry point
 *
 * Return: (0) on success
 */
int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		interactive_mode();
	}
	else
	{
		no_interactive_mode();
	}
	return (0);
}
