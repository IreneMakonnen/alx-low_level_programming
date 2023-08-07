#include "main.h"

/**
 * read_textfile - Reads a text file and print to POSIX standard output
 * @filename: String containing a filename
 * @letters: Number of letters to read and print
 * Return: 0=file can't open/write fails/unexpected bytes/NULL if filename=0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor, read_bytes, written_bytes;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	read_bytes = read(file_descriptor, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (written_bytes == -1 || written_bytes != read_bytes)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (written_bytes);
}
