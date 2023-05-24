#include "main.h"
#include <stdlib.h>

/**
 * __exit - exit from shell
 * @command: command to execute
 * @shell_name: name of the shell
 * Return: void
*/
void __exit(char *command, char *shell_name)
{
	UNUSED(command);
	UNUSED(shell_name);
	exit(EXIT_SUCCESS);
}
