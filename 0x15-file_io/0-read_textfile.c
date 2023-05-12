#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename:...
 * @letters: number of letters to should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd, rd, wrt;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	rd = read(fd, buff, letters);
	wrt = write(STDOUT_FILENO, buff, rd);

	free(buff);
	close(fd);
	return (wrt);
}
