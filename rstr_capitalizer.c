#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] += 32;
		if ((str[count] >= 'a' && str[count] <= 'z') &&
				(str[count + 1] == ' ' || str[count + 1] == '\t' ||
				 str[count + 1] == '\0'))
			str[count] -= 32;
		write(1, &str[count], 1);
		count++;
	}
}

int	main(int ac, char **av)
{
	int	iter;

	iter = 1;
	if (ac > 1)
	{
		while (iter < ac)
		{
			rstr_capitalizer(av[iter]);
			write(1, "\n", 1);
			iter++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
