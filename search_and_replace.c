#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	search_and_replace(char *str, char *c, char *x)
{
	int	index;
	int	cindex;
	int	xindex;

	index = 0;
	cindex = 0;
	xindex = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c[cindex])
			str[index] = x[xindex];
		write(1, &str[index], 1);
		index++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 4 && (ft_strlen(av[2]) == 1) && (ft_strlen(av[3]) == 1))
	{
		search_and_replace(av[1], av[2], av[3]);
	}
	write(1, "\n", 1);
	return (0);
}
