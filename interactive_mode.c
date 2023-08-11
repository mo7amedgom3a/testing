#include "shell.h"

/**
 * interactive_mode - UNIX command line interpreter
 *
 * Return: void
 */
void interactive_mode(void)
{
	char *input;
	char **argv;
	int stat = -1;

	do {
		printf("simple_prompt$ ");
		input = get_line();
		argv = split(input);
		stat = execute(argv);

		free(input);
		free(argv);

		if (stat >= 0)
		{
			exit(stat);
		}
	} while (stat == -1);
}
