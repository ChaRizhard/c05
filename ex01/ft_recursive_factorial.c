#include <stdio.h>

int	ft_recursive_factorial_helper(int i, int n)
{
	if (i == 0)
	{
		return (n);
	}
	if (i >=0)
	{
		return (ft_recursive_factorial_helper(i - 1, n * i));
	}
	return (0);
}

int	ft_recursive_factorial(int nb)
{
	return (ft_recursive_factorial_helper(nb, 1));
}
/*
int	main()
{
	int	i;

	i = 12;
	printf("%d\n", ft_recursive_factorial(i));
	return(0);
}
*/
