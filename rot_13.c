#include <unistd.h>

void	rot_13(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'M')
			str[count] = str[count] + 13;
		else if (str[count] >= 'N' && str[count] <= 'Z')
			str[count] = str[count] - 13;
		else if (str[count] >= 'a' && str[count] <= 'm')
			str[count] = str[count] + 13;
		else if (str[count] >= 'n' && str[count] <= 'z')
			str[count] = str[count] - 13;
		write(1, &str[count], 1);
		count++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	write(1, "\n", 1);
	return (0);
}
