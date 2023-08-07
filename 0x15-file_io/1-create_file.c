#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name offile to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 (Success)/ -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int text_len = 0, fd, w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, text_len);
	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}
