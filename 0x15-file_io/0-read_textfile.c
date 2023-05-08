#include <stdlib.h>
#include "main.h"

/**
  * read_textfile - a txt file will be read nd printed to POSIX standard output
  * * @filename: file to read
  * @letters: num of letters to be read nd printed 
  * Return: num of letters to be  read and printd  0 if fails
  */

ssize_t read_textfile(const char *filename, size_t letters);
{
	char *zak;
	int of;
	size_t lRead, check;

	if (!filename || !letters)
		return (0);
	zak = malloc(letters);
	if (!zak)
		return (0);
	/* open file */
	of = open(filename, O_RDONLY);
	if (of == -1)
	{
		free(zak)
			return (0);
	}
	/* read file up to "letters" amount of char */
	lRead = read(of, zak, letters);
	if (lRead < 1)
	{
		free(zak);
		close(of);
		return (0);
	}
	/* write content read */
	check = write(STDOUT_FILENO, zak, lRead);
	free(zak);
	close(of);

	if (!check || check != lRead)
		return (0);

	return (lRead);
}

