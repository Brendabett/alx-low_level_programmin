/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of the two integers
 */
int add(int a, int b)
{
return (a + b);
}

/**
 * sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of the two integers
 */
int sub(int a, int b)
{
        return (a - b);
}

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: multiplication of the two integers
 */
int mul(int a, int b)
{
        return (a * b);
}

/**
 * div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: division of the two integers
 */
int div(int a, int b)
{
if (b == 0)
return (0);
return (a / b);
}

/**
 * mod - finds remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: modulus of the two integers
 */
int mod(int a, int b)
{
        return (a % b);
}
