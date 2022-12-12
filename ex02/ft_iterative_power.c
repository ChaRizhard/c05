#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (++i <= power)
	{
		nb *= n;
	}
	return (nb);
}
/*
int	main()
{
	int	x;
	int	y;

	x = 2;
	y = 2;

	printf("%i\n", ft_iterative_power(x, y));
	return (0);
}
*/
