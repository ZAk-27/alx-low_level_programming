#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_bff - Allocates 1024 biytes for a buff.
 * @file: the file buffer s name  storing charst for.
 *
 * Return: A pointr to the new-allocated buff.
 */
char *create_bff(char *file)
{
	char *bff;

	bff = malloc(sizeof(char) * 1024);

	if (!bff)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bff);
}
void close_file(int d)
{
	int c;

	c = close(d);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
}

/**
 * main - Copies the contents of a f to another file.
 * @argc: The number of arguments supplied to program.
 * @argv: An array of pointers to the argments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument counted is false - exit code 97.
 * If file_from does not exist nd can't read -  98.
 * If file_to can't be created or writen to -  99.
 * If file_to or file_from cannot be closd - 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *bff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bff = create_bff(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, bff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bff);
			exit(98);
		}

		w = write(to, bff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bff);
			exit(99);
		}

		r = read(from, bff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(bff);
	close_file(from);
	close_file(to);

	return (0);
}

