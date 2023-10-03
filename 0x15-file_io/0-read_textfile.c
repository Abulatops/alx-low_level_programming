#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return: w- actual number of bytes read and printed
*  0 when function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t bytesWritten;
ssize_t bytesRead;
FILE *file = fopen(filename, "r");
if (file == NULL)
{
return (0);
}
buffer = (char *)malloc((letters + 1) * sizeof(char));
if (buffer == NULL)
{
fclose(file);
return (0);
}
bytesRead= fread(buffer, sizeof(char), letters, file);
if (bytesRead == 0)
{
fclose(file);
free(buffer);
return (0);
}
buffer[bytesRead] = '\0';
bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);
if (bytesWritten < bytesRead)
{
fclose(file);
free(buffer);
return (0);
}
fclose(file);
free(buffer);
return (bytesWritten);
}
