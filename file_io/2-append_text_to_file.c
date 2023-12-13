#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file - Append text file.
 * @filename: name of the file.
 * @text_content: content of the text.
 *
 * Return: 1 success -1 fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		len = strlen(text_content);

	o = open(filename, O_APPEND | O_RDWR);
	w = write(o, text_content, len);

	if (o < 0 || w < 0)
		return (-1);

	close(o);

	return (1);
}
