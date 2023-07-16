#include "main.h"
/**
 * create_file - creates a file
 * @filename:...
 * @text_content:...
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wt, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(fd, text_content, i);
	if (fd == -1 || wt == -1)
		return (-1);
	close(fd);
	return (1);
}
