#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* strtow - Splits a string into words.
* @str: The string to split.
*
* Return: A pointer to an array of strings, with the last element as NULL,
*         or NULL on failure.
*/
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return (NULL);

int word_count = 0;
char **words = NULL;

while (*str != '\0')
{
while (*str == ' ')
str++;

if (*str != '\0')
		{
int word_length = 0;
while (str[word_length] != ' ' && str[word_length] != '\0')
word_length++;

words = (char **)realloc(words, (word_count + 2) * sizeof(char *));
if (words == NULL)
return (NULL);

words[word_count] = (char *)malloc(word_length + 1);
if (words[word_count] == NULL)
return (NULL);

for (int i = 0; i < word_length; i++)
words[word_count][i] = str[i];
words[word_count][word_length] = '\0';

word_count++;
str += word_length;
}
}

words[word_count] = NULL;
return (words);
}

