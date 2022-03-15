#include <unistd.h>
#include <putchar.h>

/**
 * main - Check description
 * Description: It prints the word Putchar followed by a new line.
 * Return: 0.
 */
int main(void)
{
0-putchar.c char word[7] = 'Putchar';
0-putchar.c int i;

0-putchar.c for (i = 0; i < 7; i++)
0-putchar.c 0-putchar.c _putchar(word[i]);
0-putchar.c _putchar('\n');

0-putchar.c return (0);
}
