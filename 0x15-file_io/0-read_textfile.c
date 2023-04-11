#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t nread;
    char *buf;
    FILE *fp;

    if (filename == NULL)
        return (0);

    buf = malloc(sizeof(char) * (letters + 1));
    if (buf == NULL)
        return (0);

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        free(buf);
        return (0);
    }

    nread = fread(buf, sizeof(char), letters, fp);
    if (nread < 0)
    {
        free(buf);
        fclose(fp);
        return (0);
    }

    buf[nread] = '\0';
    if ((ssize_t)fwrite(buf, sizeof(char), nread, stdout) != nread)
    {
        free(buf);
        fclose(fp);
        return (0);
    }

    free(buf);
    fclose(fp);

    return (nread);
}
