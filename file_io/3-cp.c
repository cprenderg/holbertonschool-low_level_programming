#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * copy_file - copies contents from one file descriptor to another
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 *
 * Return: 0 on success, -1 on failure
 */
static int copy_file(int fd_from, int fd_to)
{
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	bytes_read = read(fd_from, buffer, 1024);
	while (bytes_read > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			return (-1);
		}
		bytes_read = read(fd_from, buffer, 1024);
	}
	if (bytes_read == -1)
	{
		return (-1);
	}
	return (0);
}

/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 97, 98, 99, 100 on failure, 0 on success
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		return (99);
	}
	if (copy_file(fd_from, fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		close(fd_to);
		return (99);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		return (100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (100);
	}
	return (0);
}
