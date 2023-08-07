#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of file
 * @text_content: NULL terminated string to add at EOF
 * Return: 1 (Success), -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int text_len = 0, fd, wr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	wr = write(fd, text_content, text_len);
	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
