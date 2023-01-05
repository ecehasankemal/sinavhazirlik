#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	count;
	int	rpt;

	rpt = 0;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			rpt = str[count] - 96;
			while (rpt)
			{
				write(1, &str[count], 1);
				rpt--;
			}
		}
		else if (str[count] >= 'A' && str[count] <= 'Z')
		{
			rpt = str[count] - 64;
			while (rpt)
			{
				write(1, &str[count], 1);
				rpt--;
			}
		}
		else
			write(1, &str[count], 1);
		rpt = 0;
		count++;
	}
}


int main(int ac, char **av)
{
	if (ac == 2)
	{
		repeat_alpha(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
