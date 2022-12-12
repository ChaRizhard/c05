#include <stdio.h>

int	ft_fibonacci_recursion(int index, int x, int y)
{
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (y);
	}
	if ( index >= 1)
	{
		return (ft_fibonacci_recursion(index - 1, y, x + y));
	}
	return (-1);
}

int	ft_fibonacci(int index)
{
	return (ft_fibonacci_recursion(index, 0, 1));
}
/*
int	main()
{
	int	x;

	x = 7;
	printf("%d\n", ft_fibonacci(x));
	return (0);
}
*/
