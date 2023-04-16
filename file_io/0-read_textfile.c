#include "main.h"

/**
 * read_textfile - reads a text file and prints
 *
 * @filname: Filename
 * @letters: Letters
 *
 * Return: Int
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int cont;
	char *punt;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	punt = malloc(sizeof(char) * (letters));
	if (punt == NULL)
		return (0);
	read(fd, punt, letters);
	for (cont = 0; *(punt + cont); cont++)
		;
	write(STDOUT_FILENO, punt, cont);
	close(fd);
	return (cont);
}
