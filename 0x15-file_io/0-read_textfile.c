#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - a txt file will be read nd printed to POSIX standard output
  * * @filename: file to read
  * @letters: num of letters to be read nd printed 
  * Return: num of letters to be  read and printd  0 if fails
  */

ssize_t read_textfile(const char *filename, size_t letters);
{
	char *buff;
	int of;
	size_t lRead, check;

	if (!filename || !letters)
		return (0);

	buff = malloc(letters);
	if (!buff)
		return (0);
	of = open(filename, O_RDONLY);
	if (of == -1)
	{
		free(buff);
		return (0);
	}
	lRead = read(of, buff, letters);
	if (lRead < 1)
	{
		free(buff);
		close(of);
		return (0);
	}
	check = write(STDOUT_FILENO, buff, lRead);

	free(buff);
	close(of);

	if (!check || check != lRead)
		return (0);

	return (lRead);
}

