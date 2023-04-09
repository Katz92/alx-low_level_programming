#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Desc: Header file containing prototypes for all functions
 * written in the 0x14-file_io directory.
 *
 * This file contains the function prototypes for the functions defined
 * in the file_io directory. These functions include reading from and
 * writing to files, creating files, and appending text to existing files.
 */

#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * This header file contains the function prototypes for the functions defined
 * in the file_io directory. These functions include reading from and writing
 * to files, creating files, and appending text to existing files.
 */

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(char *str);

#endif /* MAIN_H */

