#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to file to be opened and printed
 * @letters: number of letters to be read and printed
 *
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t wt;
	ssize_t rd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	rd = read(fd, buffer, letters);
	wt = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(fd);
	return (wt);
}
