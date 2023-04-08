#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define MAXSIZE 1024

/**
 * main - copies content of file_from to file_to
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success, or error code if failure
 */
int main(int ac, char **av)
{
	int ifd, ofd, read_size, write_size;
	char buffer[MAXSIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	ifd = open(av[1], O_RDONLY);
	if (ifd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	ofd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (ofd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	do {
		read_size = read(ifd, buffer, MAXSIZE);
		if (read_size == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

		write_size = write(ofd, buffer, read_size);
		if (write_size == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	} while (read_size > 0);

	if (close(ifd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ifd), exit(100);
	if (close(ofd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ofd), exit(100);

	return (0);
}

