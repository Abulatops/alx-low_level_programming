#include "main.h"
/**
* create_file - Creates a file.
* @filename: A pointer to the name of the file to create.
* @text_content: A pointer to a string to write to the file.
*
* Return: If the function fails - -1.
* Otherwise - 1.
*/
int create_file(const char *filename, char *text_content)
{
int fed, wri, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
fed = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wri = write(fed, text_content, len);
if (fed == -1 || wri == -1)
return (-1);
close(fed);
return (1);
}
