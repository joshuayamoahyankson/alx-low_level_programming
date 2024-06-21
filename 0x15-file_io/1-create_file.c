#include "main.h"

/**
 * create_file - the function name that creates a file
 * @filename: a pointer of type char as a parameter that
 * is the file to create
 * @text_content: a pointer that in NULL terminated string
 * Description: Create a function that creates a file.
 * Prototype: int create_file(const char *filename, char
 * *text_content);
 * where filename is the name of the file to create and
 * text_content is a NULL terminated string to write to the file
 * Returns: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * The created file must have those permissions: rw-------
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 * Return: Created file
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fp = fopen(filename, "w");

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		if (fprintf(fp, "%s", text_content) < 0)
		{
			fclose(fp);
			return (-1);
		}
	}
	if (fclose(fp) != 0)
	{
		return (-1);
	}

	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		return (-1);
	}
	return (1);
}
