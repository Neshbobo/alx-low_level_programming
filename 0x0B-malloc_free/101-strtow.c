#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int count_words(const char *str) {
int count = 0;
int is_word = 0;

while (*str) {
if (*str == ' ' || *str == '\t' || *str == '\n') {
is_word = 0;
}
else if (!is_word)
{
is_word = 1;
count++;
}
str++;
}

return count;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = count_words(str);
    if (num_words == 0) {
        return NULL;
    }

    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    int word_index = 0;
    int word_start = 0;
    int in_word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            if (in_word) {
                str[i] = '\0';
                words[word_index] = &str[word_start];
                word_index++;
                in_word = 0;
            }
        } else if (!in_word) {
            word_start = i;
            in_word = 1;
        }
    }

    if (in_word) {
        words[word_index] = &str[word_start];
    }

    words[num_words] = NULL;

    return words;
}
