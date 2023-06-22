#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Globale data - collection of data instance
 */
data_t data;

/**
 * main - main function
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: (Success) EXIT_SUCCESS
 * ------- (Fail) EXIT_FAILURE
 */
#define MAX_LINE_SIZE 1024

int main(int ac, char **av)
{
        FILE *fp;
        char line[MAX_LINE_SIZE];

        if (ac != 2) {
                fprintf(stderr, "Usage: %s filename\n", av[0]);
                exit(EXIT_FAILURE);
        }

        fp = fopen(av[1], "r");
        if (fp == NULL) {
                fprintf(stderr, "Error: cannot open file %s\n", av[1]);
                exit(EXIT_FAILURE);
        }

        while (fgets(line, MAX_LINE_SIZE, fp) != NULL) {
                if (*line == '\n')
                        continue;
        }

        fclose(fp);
        return EXIT_SUCCESS;
}
