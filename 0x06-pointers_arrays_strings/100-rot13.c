#include "main.h"

/**
 * *rot13 - encodes a string using rot13 encryption
 * @s: string to be encoded
 *
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
char nor[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
      'Z'};
char rot[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
      'M'};
int count, len;
char now;

for (len = 0; *(s + len) != '\0'; len++)
{
now = *(s + len);
for (count = 0; count < 52; count++)
{
if (now == nor[count])
*(s + len) = rot[count];
}
}

return (s);
}
