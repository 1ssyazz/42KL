
#include <unistd.h>

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}

int		main(int argc, char **argv)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[2][j])
		{
			if (argv[2][j++] == argv[1][i])
			{
				i++;
			}
		}
		if (!argv[1][i])
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
