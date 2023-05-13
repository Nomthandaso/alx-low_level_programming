#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc:...
 * @argv:...
 *
 * Return: 0 if successful
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
	buffer = buf_file(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	rd = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wrt = write(file_to, buffer, rd);
		if (file_to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buffer);
	_close(file_from);
	_close(file_to);

	return (0);
}
/**
 * buf_file -...
 * @file_from:...
 *
 * Return: pointer to the new buffer
 */
char *buf_file(char *file_from)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_from);
		exit(99);
	}

	return (buffer);
}
/**
 * _close - closes file descriptors
 * @fd: file descriptor to be closed
 */
void _close(int fd)
{
	int close_file;

	close_file = close(fd);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
