#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to  the file's name.
 * @text_content: The string to add to the file's end.
 *
 * Return: If error or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Or - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;
if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	while (text_content && text_content[len])
		len++;
	write(fd, text_content, len);
	close(fd);
	return (1);

