/**
 * _abs - function that computes the absolute value of an integer
 * Return: the absolute value of an integer
 * @n: the checked number
 */
	int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = (-1) * n;
		return (n);
	}
}
