#include "main.h"

/**
 * append_text_to_file - write an the end of the file.
 *
 * @filename: Filename.
 * @text_content: Content of Text
 *
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int cont;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (cont = 0; text_content[cont]; cont++)
			;
		write(fd, text_content, cont);
	}
	close(fd);
	return (1);
}
