#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef READ_TEXTFILE_H
#define READ_TEXTFILE_H

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* READ_TEXTFILE_H */

int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s filename\n", av[0]);
		exit(EXIT_FAILURE);
	}

	n = read_textfile(av[1], 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);
	return (EXIT_SUCCESS);
}

#endif /* MAIN_H */

