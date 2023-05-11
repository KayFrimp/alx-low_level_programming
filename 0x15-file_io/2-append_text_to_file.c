#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add to the EOF
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_fd, w_fd, count = 0;

	if (filename == NULL)
		return (-1);

	o_fd = open(filename, O_WRONLY | O_APPEND);
	if (o_fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
		w_fd = write(o_fd, text_content, count);
		if (w_fd == -1)
			return (-1);
	}
	close(o_fd);
	return (1);
}
