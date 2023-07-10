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
	char *bf;
	ssize_t d;
	ssize_t ws;
	ssize_t ts;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	ts = read(d, bf, letters);
	ws = write(STDOUT_FILENO, bf, ts);

	free(bf);
	close(d);
	return (ws);
}
