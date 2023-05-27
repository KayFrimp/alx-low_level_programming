#include "main.h"

/**
 * close_fd - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_fd(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - copy content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src_fd, des_fd;
	ssize_t letters_rd, letters_wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		exit(99);
	}
	des_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	letters_rd = read(src_fd, buffer, 1024);
	if (letters_rd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (letters_rd > 0)
	{
		letters_wr = write(des_fd, buffer, letters_rd);
		if (des_fd == -1 || letters_wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		letters_rd = read(src_fd, buffer, 1024);
		des_fd = open(argv[2], O_WRONLY | O_APPEND);
	}
	close_fd(src_fd);
	close_fd(des_fd);
	return (0);
}
