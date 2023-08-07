#include "main.h"

int open_file(const char *filename, int flags, mode_t mode);
void copy_file(int fd_from, int fd_to);

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
 * copy_file - Copies data from one file descriptor to another
 * @fd_from: The source file descriptor
 * @fd_to: The destination file descriptor
 */
void copy_file(int fd_from, int fd_to)
{
	char buffer[1024];
	ssize_t read_result, write_result;

	while ((read_result = read(fd_from, buffer, sizeof(buffer))) > 0)
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
}

/**
 * main - Copies the contents of a file to another file
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int from, to;
	char buffer[1024];
	size_t read_result, write_result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open_file(argv[1], O_RDONLY, 0);
	to = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read_result = read(from, buffer, sizeof(buffer))) > 0)
	{
		write_result = write(to, buffer, read_result);
		if (write_result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (read_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	close(from);
	close(to);
	return (0);
}