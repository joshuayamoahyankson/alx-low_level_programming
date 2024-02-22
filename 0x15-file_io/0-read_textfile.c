#include "main.h"

/**
 * read_textfile - function name that reads textfile
 * @filename: the file to be read from
 * @letters: number of letters to be read and print
 * Write a function that reads a text file and prints
 * it to the POSIX standard output
 * Prototype: ssize_t read_textfile(const char *filename, size_t letters);
 * where letters is the number of letters it should read and print
 * returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 * Return: actual numbers of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t total_printed_chars = 0;
	char buffer;
	FILE *file;

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}

	while (total_printed_chars < letters &&
	fread(&buffer, sizeof(char), 1, file) > 0)
	{
		printf("%c", buffer);
		total_printed_chars++;
	}

	fclose(file);
	return (total_printed_chars);
}
