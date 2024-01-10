#include "libft.h"

int	ft_isspace(int c)
{
    if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
        return (1);
    return (0);
}
int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	sign;

	if (str == 0)
		return (0);
	result = 0;
	i = 0;
	sign = 1;
	while (ft_isspace (str[i]))
		i ++;
	if (str[i] == '-')
	{
		sign = -1;
		i ++;
	}
	else if (str[i] == '+')
		i ++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10 + (str[i] - '0');
		i ++;
	}
	return (result * sign);
}

/*
int	main(void)
{
	char str[] = "   -9z99";
	int i = ft_atoi(str);
	printf ("%d\n", i);
	
}
*/