#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
*
*
* Desc: Header file containing prototypes for all functions
* used in the 0x0B-more_malloc_free directory.
*/


char *_strdup(char *str);

char **strtow(char *str);

char *argstostr(int ac, char **av);

char *str_concat(char *s1, char *s2);

void free_grid(int **grid, int height);

int **alloc_grid(int width, int height);

char *create_array(unsigned int size, char c);

#endif
