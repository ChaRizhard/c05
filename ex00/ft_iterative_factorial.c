#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	if (nb < 0)
	{
		return(0);
	}
	while (++i <= nb)
	{
		n *= i;
	}
	return(n);
}
/*
int	main()
{
	printf("%d\n", ft_iterative_factorial(5));
	return(0);
}
*/
