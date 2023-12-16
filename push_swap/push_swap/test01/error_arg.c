int	is_duplicate(int *integers, int count, int nbr)
{
	int	i = 0;

	while (i < count)
		if (intergers[i] == nbr)
			return (1);
	return (0);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isnbr(char *av)
{
	int		i;

	i = 0;
	if ((av[0] == '+' || av[0] == '-') && av[1] != '\0')
		i++;
	while (av[i])
	{
		if (!ft_isdigit(av[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *nptr)
{
	int		neg;
	long	nbr;

	neg = 1;
	nbr = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			neg *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		nbr = nbr * 10 + (*nptr - 48);
		nptr++;
	}
	if (nbr < INT_MIN || nbr > INT_MAX)
	{
		ft_perror("Error\n");
		exit (EXIT_FAILURE);
	}
	return (nbr * neg);
}