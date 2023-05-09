#include "main.h"

/**
 * read_textfile - reads a text file and prints it to STDOUT.
 * @filename: Name of file
 * @letters: Number of letters to read and print
 *
 * Return: letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t letters_rd, letters_wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* Open file and return if it failed */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocate memory space to temporarily store read letters */
	buffer = malloc(sizeof(char) * letters);
	/* Initialize letters_rd and pass the return value of read to it */
	letters_rd = read(fd, buffer, letters);
	if (letters_rd == -1)
	{
		free(buffer);
		return (0);
	}

	/* Print read text to POSIX standard output and chech if it was successful */
	letters_wr = write(STDOUT_FILENO, buffer, letters_rd);
	if (letters_wr == -1)
	{
		free(buffer);
		return (0);
	}

	/* Free buffer, close fd and return letters read and printed */
	free(buffer);
	close(fd);
	return (letters_wr);
}
