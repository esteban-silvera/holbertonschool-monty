#include "monty.h"

int main(int argc, char *argv[])
{
    FILE *file;
    char *line = NULL;
    size_t len = 0;
    stack_t *stack = NULL;
    int line_number = 0;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while (getline(&line, &len, file) != -1)
    {
        line_number++;
        /*Lógica para leer y ejecutar los comandos Monty*/
    }

    free(line);
    fclose(file);
    /*Liberar la memoria utilizada por la pila si es necesario*/
return (EXIT_SUCCESS);
}
