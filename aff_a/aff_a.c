
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_aff_a(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == 'a')
		{
			ft_putchar('a');
		}
		x++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_aff_a(argv[1]);
	}
	else
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	return (0);
}
