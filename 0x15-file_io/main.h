#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> /* for size_t */

/* function prototype */
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */

#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, m;
	char *buf;
	FILE *fp;

	if (!filename)
		return (0);
	fp = fopen(filename, "r");
	if (!fp)
		return (0);
	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
	{
		fclose(fp);
		return (0);
	}
	n = fread(buf, sizeof(char), letters, fp);
	if (n == -1)
	{
		free(buf);
		fclose(fp);
		return (0);
	}
	buf[n] = '\0';
	m = printf("%s", buf);
	free(buf);
	fclose(fp);
	if (m < 0)
		return (0);
	return (n);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(1);
	}
	n = read_textfile(av[1], 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);
	return (0);
}

