
#include <unistd.h>

char	ft_aff_a(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] == 'a')
		{
			write(1, "a", 1);
		}
		a++;
	}
	write(1, "\n", 1);
	return (*str);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_aff_a(argv[1]);
	}
	else
	{
		write(1, "a", 1);
		write(1, "\n", 1);
	}
	return (0);
}
