#include "main.h"

/**
 * create_file - creates a text file
 * @filename: The file name
 * @text_content: The content to be written in the file
 *
 * Return: 1 if succesful if not -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		write(fd, text_content, len);
	}

	close(fd);
	return (1);
}
