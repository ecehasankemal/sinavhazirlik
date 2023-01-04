#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(const char *str)
{
	int	index;
	int	res;
	int	dop;

	index = 0;
	res = 0;
	dop = 1;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == ' ')
	   index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			dop *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9' && str[index] != '\0')
	{
		res = (str[index] - '0') + (res * 10);
		index++;
	}
	return (res * dop);
}

int	ft_is_prime(int num)
{
	int	check;

	check = 2;
	while (check < num && check <= 46341)
	{
		if (num % check == 0)
			return (0);
		check++;
	}
	return (check);
}

int	add_prime_sum(char *str)
{
	int	prime;
	int	num;
	int	res;

	res = 0;
	num = ft_atoi(str);
	if (num < 1)
		return (0);
	while (num > 1)		
	{
		res += ft_is_prime(num);
		num--;
	}
	return (res);
}

void	ft_putnbr(int nb)
{
	long	num;

	num = nb;
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	main(int ac, char **av)
{
	if (ac != 2)
		write(1, "0", 1);
	if (ac == 2)
	{
		if (ft_atoi(av[1]) < 0)
		{
			write(1, "\n", 1);
			return (0);
		}
		else
			ft_putnbr(add_prime_sum(av[1]));
	}
	write(1, "\n", 1);
	return (0);
}
