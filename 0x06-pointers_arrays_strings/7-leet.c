/**
 * *leet - encodes a string into 1337
 * a and A replaced by 4
 * e and E replaced by 3
 * o and O replaced by 0
 * t and T replaced by 7
 * l and L replaced by 1
 * @s: string to be encoded
 *
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
int count, len;
char lets[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char nums[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
char current;

for (len = 0; *(s + len) != '\0'; len++)
{
current = *(s + len);
for (count = 0; count < 10; count++)
{
if (current == lets[count])
*(s + len) = nums[count];
}
}

return (s);
}
