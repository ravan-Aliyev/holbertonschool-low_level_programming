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
	char *buf = malloc(strlen(text_content) + 1);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	o = open(filename, O_CREAT | O_EXCL, S_IRUSR | S_IWUSR);
	w = write(STDOUT_FILENO, buf, sizeof(buf));


	if (o < 1 || w < 1)
	{
		free(buf);
		return (-1);
	}

	free(buf);
	close(o);

	return (1);
}
