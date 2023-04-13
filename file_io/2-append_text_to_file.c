#include "main.h"
/**
 * append_text_to_file - add text tp file
 * @filename: name of file to be create
 * @text_content: text to add in file
 * Return: 1 is success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int apd;
	int len = 0;
	int wr;

	if (filename == NULL)
		return (-1);

	apd = open(filename, O_WRONLY | O_APPEND);

	if (apd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
		len++;
		wr = write(apd, text_content, len);
		if (wr == -1)
		{	close(apd);
			return (-1);
		}
	}

	close(apd);
	return (1);
}
