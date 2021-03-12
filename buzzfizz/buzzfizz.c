
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int a)
{
	unsigned int nb;

	nb = (unsigned int)a;
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		main(void)
{
	int i;

	i = 1;
	while (i < 101)
	{
		if (i % 4 == 0 && i % 7 == 0)
			write(1, "buzzfizz", 8);
		else if (i % 4 == 0)
			write(1, "buzz", 4);
		else if (i % 7 == 0)
			write(1, "fizz", 4);
		else
			ft_putnbr(i);
		ft_putchar('\n');
		i++;
	}
}
