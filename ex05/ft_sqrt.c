#include <stdio.h>

int	ft_sqrt_recursion(int nb, int i)
{
	if (i * i == nb)
	{
		return (i);
	}
	if (i * i < nb)
	{
		return (ft_sqrt_recursion(nb, i + 1));
	}
	else
	{
		return (0);
	}
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recursion(nb, 0));
}
/*
int	main()
{
	int	nb;

	nb = 16;
	printf ("%d\n", ft_sqrt(nb));
	return (0);
}
*/
