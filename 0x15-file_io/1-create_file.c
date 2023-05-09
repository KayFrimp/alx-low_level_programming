#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: Null terminated string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;
	ssize_t w_bytes;

	if (filename == NULL)
		return (-1);
	while (text_content[len] != '\0')
		len++;
	/* create file and maintain the permissions if it already exists */
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	w_bytes = write(fd, text_content, len);
	if (w_bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
