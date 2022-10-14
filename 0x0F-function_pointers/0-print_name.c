#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: pointer to name.
 * @f: A pointer to a function that prints a name.
 */
void print_name(char *name, void (*f)(char *)) 
{
        if (!name || !f)
                return;
        f(name);
}
