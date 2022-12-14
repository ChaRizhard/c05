#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
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
		n *= nb;
	}
	return (n);
}
/*
int	main()
{
	printf("%d\n", ft_iterative_power(2, 2));
	return (0);
}
*/
