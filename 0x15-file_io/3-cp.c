#include "main.h"

int open_file(const char *filename, int flags, mode_t mode);
int copy_file(int fd_from, int fd_to);

/**
 * main - Entry point for the program
 * @argc: The number of command line arguments
 * @argv: An array of command line argument strings
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open_file(argv[1], O_RDONLY, 0);
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	copy_file(fd_from, fd_to);
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
		exit(100);
	}
	return (0);
}

/**
 * open_file - Opens a file with specified flags and mode
 * @filename: The name of the file
 * @flags: The flags for opening the file
 * @mode: The permissions mode
 * Return: The file descriptor on success, or exits on failure
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't %s %s\n",
		(flags & O_WRONLY) ? "write to" : "read from", filename);
		exit((flags & O_WRONLY) ? 99 : 98);
	}
	return (fd);
}

/**
 * copy_file - Copies data from one file descriptor to another.
 * @fd_from: The source file descriptor.
 * @fd_to: The destination file descriptor.
 */
int copy_file(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t read_result, write_result;

	while ((read_result = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_result = write(fd_to, buffer, read_result);
		if (write_result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to destination file\n");
			exit(99);
		}
	}
	if (read_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from source file\n");
		exit(98);
	}
	return (1);
}
