#include "main.h"

/**
 * read_textfile - Reads a text file
 * @filename: The file name
 * @letters: The amount of letters to read
 *
 * Return: The actual number of letters it could read
 * or 0 if a problem occured
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz;
	size_t rz;
	char *buf = malloc((sizeof(char) * letters) + 1);

	if (!filename || letters <= 0)
		return (0);

	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	sz = read(fd, buf, letters);
	if (sz == -1)
		return (0);
	buf[sz] = '\0';

	rz = write(STDOUT_FILENO, buf, sz);
	if (rz > letters)
		return (0);

	close(fd);
	return (rz);
}
