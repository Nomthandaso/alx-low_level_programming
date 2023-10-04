#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename:...
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *puff;
	ssize_t fd, rd, wrt;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	puff = malloc(sizeof(char) * letters);
	rd = read(fd, puff, letters);
	wrt = write(STDOUT_FILENO, puff, rd);

	free(puff);
	close(fd);
	return (wrt);
}
