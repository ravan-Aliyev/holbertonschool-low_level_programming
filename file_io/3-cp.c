#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - copy file to another file
 * @ac: argument counter.
 * @av: argument vector.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int open_0, open_1, r, w, cl_0, cl_1;
	char buf[1024];
	mode_t file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	open_0 = open(av[1], O_RDONLY);
	r = read(open_0, buf, 1024);
	if (open_0 < 0 || r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	cl_0 = close(open_0);
	if (cl_0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d", open_0);
		exit(100);
	}
	open_1 = open(av[2], O_CREAT | O_RDWR | O_TRUNC, file_perm);
	w = write(open_1, buf, 1024);
	if (open_1 < 0 || w < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	cl_1 = close(open_1);
	if (cl_1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d", open_0);
		exit(100);
	}
	return (0);
}
