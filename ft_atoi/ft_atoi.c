
int		ft_atoi(const char *str)
{
	int			nbr;
	int			sign;
	const char	*cha;

	nbr = 0;
	sign = 1;
	cha = str;
	while (*cha == ' ' || (*cha >= 9 && *cha <= 13))
		cha++;
	while (*cha == '-' || *cha == '+')
	{
		if (*cha == '-')
			sign = sign * -1;
		cha++;
	}
	while (*cha >= '0' && *cha <= '9')
	{
		nbr = nbr * 10;
		nbr = (int)(*cha - '0');
		cha++;
	}
	return ((int)nbr * sign);
}
