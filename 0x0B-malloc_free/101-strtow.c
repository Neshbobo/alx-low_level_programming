#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* strtow - Split a string into words
* @str: The input string
*
* Return: Pointer to an array of strings, or NULL on failure
*/
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return (NULL);

int i, j, len = strlen(str);
int num_words =

  
for (i = 0; i < len; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
num_words++;
}
}

if (num_words == 0)
return (NULL);

char **words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

i = 0;
int word_start = 0;
int in_word = 0;

    
for (j = 0; j <= len; j++)
{
if (str[j] == ' ' || str[j] == '\0')
{
if (in_word)
{
words[i] = (char *)malloc(j - word_start + 1);
if (words[i] == NULL)
{
for (i = 0; i < num_words; i++) free(words[i]);
free(words);
return (NULL);
}
strncpy(words[i], str + word_start, j - word_start);
words[i][j - word_start] = '\0';
i++;
in_word = 0;
}
}
else if (!in_word)
{
word_start = j;
in_word = 1;
}
}

words[num_words] = NULL;
return (words);
}

int main()
{
char input[] = "This is a test";
char **result = strtow(input);

if (result != NULL)
{
int i = 0;
while (result[i] != NULL)
{
printf("%s\n", result[i]);
free(result[i]);
i++;
}
free(result);
}

return (0);
}
