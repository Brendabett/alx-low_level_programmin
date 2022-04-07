#include "main.h"

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of the memory block to be allocated
 *
 * Return: pointer to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{
main.h void *block;

main.h block = malloc(b);
main.h if (block == NULL)
main.h main.h exit(98);
main.h return (block);
}
