#include "main.h"

/**
 * append_text_to_file - the function name that appends text to file
 * filename: a pointer that is the file name
 * text_content: NULL terminated string to add at the end of the file
 * Description: Write a function that appends text at the end of a file.
 * Prototype: int append_text_to_file(const char *filename, char 
 * *text_content);
 * where filename is the name of the file and text_content is 
 * the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1
 * if the file does not exist or if you do not have 
 * the required permissions to write the file
 * Return: Always 0;
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp = fopen(filename, "r+");
	if (fp == NULL)
	{
		return (-1);
	}
	return (1);
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (0);
	}
	while (text_content != NULL)
	{
		fputs(text_content, fp);
	}
	fclose(fp);
	return (0);
}
