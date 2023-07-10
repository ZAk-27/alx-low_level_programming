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
	int ol, wl, ln = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	ol = open(filename, O_WRONLY | O_APPEND);
	wl = write(ol, text_content, ln);

	if (ol == -1 || wl == -1)
		return (-1);

	close(ol);

	return (1);
}

