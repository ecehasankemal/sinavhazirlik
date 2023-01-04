#include <unistd.h>

void	rotone(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'y')
		{
			str[index] = str[index] + 1;
			write(1, &str[index], 1);
		}
		else if (str[index] == 'z')
		{
			str[index] = str[index] - 25;
			write(1, &str[index], 1);
		}
		else if (str[index] >= 'A' && str[index] <= 'Y')
		{
			str[index] = str[index] + 1;
			write(1, &str[index], 1);
		}
		else if (str[index] == 'Z')
		{
			str[index] = str[index] - 25;
			write(1, &str[index], 1);
		}
		else
			write(1, &str[index], 1);
		index++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}
