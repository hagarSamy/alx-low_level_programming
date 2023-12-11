
/**
 * add - adds 2 ints
 * @a: first int
 * @b: second int
 * Return: sum of a and b
*/

int add(int a, int b)
{
    return (a + b);
}

/**
 * div - divides 2 ints
 * @a: first int
 * @b: second int
 * Return: division of a and b
*/

int div(int a, int b)
{
    if (b == 0)
        return (0);
    return (a / b);
}

/**
 * mod - return modulus of 2 ints
 * @a: first int
 * @b: second int
 * Return: mod of a and b
*/

int mod(int a, int b)
{
    if (b == 0)
        return (0);
    return (a % b);
}

/**
 * mul - multiplies 2 ints
 * @a: first int
 * @b: second int
 * Return: multiplication of a and b
*/

int mul(int a, int b)
{
    return (a * b);
}
/**
 * sub - subtractss 2 ints
 * @a: first int
 * @b: second int
 * Return: subtraction of a and b
*/

int sub(int a, int b)
{
    return (a - b);
}
