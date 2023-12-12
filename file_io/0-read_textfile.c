#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
 * read_textfile - Read text file.
 * @filename: name of the file.
 * @letters: letters.
 *
 * Return: Actual number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, w;
	char *buf = malloc(sizeof(char) * letters + 1);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	n = read(fd, buf, letters);

	w = write(1, buf, n);

	if (fd < 0 || n < 0 || w < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (w);
}
