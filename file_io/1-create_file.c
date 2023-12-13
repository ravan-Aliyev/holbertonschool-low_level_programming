#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - creating file.
 * @filename: name of the file.
 * @text_content: contebt of the text.
 *
 * Return: 1 success -1 fail.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		len = strlen(text_content);

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	w = write(o, text_content, len);


	if (o < 1 || w < 1)
	{
		return (-1);
	}
	close(o);

	return (1);
}
