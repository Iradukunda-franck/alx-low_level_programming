#include "main.h"

/**
 * create_file - Creates a file with the specified contents.
 * @filename: The name of the new file.
 * @text_content: A string with a NULL termination that should be sent to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
    int fd, written_bytes = 0, length = 0;

    if (!filename)
        return (-1);

    fd = open(filename, S_IRUSR | S_IWUSR, O_CREAT | O_WRONLY | O_TRUNC);
    if (fd == -1)
        return (-1);

    if (text_content)
    {
        while (*(text_content + length))
            length++;

        written_bytes = write(fd, text_content, length);
        if (written_bytes == -1 || written_bytes != length)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
