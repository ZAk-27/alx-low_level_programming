#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - a txt file will be read nd printed to POSIX standard output
  * * @filename: file to read
  * @letters: num of letters to be read nd printed
  * Return: num of letters to be  read and printd  0 if fails
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
