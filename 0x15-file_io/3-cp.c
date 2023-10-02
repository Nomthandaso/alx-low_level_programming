#include "main.h"
/**
 * main copies content of a file to another file
 * @argc:...
 * @argv:...
 *
 * Return: 0 on Success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wrt;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = buf
