#include <stdio.h>

int	ft_recursive_power_recursion(int nb, int power, int n)
{
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (n);
	}
	if (power >= 1)
	{
		return (ft_recursive_power_recursion(nb, power - 1, n * nb));
	}
	return (0);
}

int	ft_recursive_power(int nb, int power)
{
	return (ft_recursive_power_recursion(nb, power, nb));
}
/*
int	main()
{
	int	x;
	int	y;

	x = 2;
	y = 2;
	printf("%d\n", ft_recursive_power(x, y));
	return (0);
}
*/
