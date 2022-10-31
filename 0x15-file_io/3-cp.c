#include "main.h"



/**
 * exitRead - Exits the code with a status
 * @status: The status code to exit with
 * @av: The argument Vector
 * @fileNo: The filenumber
 *
 * Return: Null void
 */
void exitRead(int status, char *av[], int fileNo)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[fileNo]);
	exit(status);
}

/**
 * exitWrite - Exits the code with a status
 * @status: The status code to exit with
 * @av: The argument Vector
 * @fileNo: The filenumber
 *
 * Return: Null void
 */
void exitWrite(int status, char *av[], int fileNo)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[fileNo]);
	exit(status);
}


/**
 * main -  a program that copies the content of a file to another file.
 * @ac: Argument count
 * @av: Argument Vector
 *
 * Return: 0 if succesful
 */
int main(int ac, char *av[])
{
	int fdf, fdt, sz, cf, ct;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdf = open(av[1], O_RDONLY);
	if (fdf == -1)
		exitRead(98, av, 1);

	fdt = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fdt == -1)
		exitWrite(99, av, 2);

	while ((sz = read(fdf, buf, 1024)))
	{
		if (sz == -1)
			exitRead(98, av, 1);
		if ((write(fdt, buf, sz)) == -1)
			exitWrite(99, av, 2);
	}
	cf = close(fdf);
	ct = close(fdt);
	if (cf)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}
	if (ct)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}
	return (0);
}
