#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Estructura de un nodo de la pila */
typedef struct stack_s
{
    int n;
    struct stack_s *next;
} stack_t;

/* Funciones del intérprete Monty */
void push(stack_t **stack, int line_number);
void pall(stack_t **stack, int line_number);

#endif /* MONTY_H */
