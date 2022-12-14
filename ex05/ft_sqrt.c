#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		return (0);
	}
	while ((i * i < nb) && (i < 46341))
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	return(0);
}
/*
int	main()
{
	printf ("%d\n", ft_sqrt(16));
	return (0);
}
*/
