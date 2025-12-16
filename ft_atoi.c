/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dale <dale@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 11:57:42 by dale              #+#    #+#             */
/*   Updated: 2025/12/14 11:57:44 by dale             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(int c);
static int	ft_isdigit(int c);

int	ft_atoi(const char *nptr)
{
	int		ret;
	char	sign;

	ret = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-' || ft_isdigit(*nptr))
	{
		sign = 1;
		if (*nptr == '-')
			sign = -1;
		if (*nptr == '+' || *nptr == '-')
			nptr++;
		while (ft_isdigit(*nptr))
		{
			ret += *nptr++ - '0';
			if (ft_isdigit(*nptr))
				ret *= 10;
		}
		return (ret * sign);
	}
	else
		return (0);
}

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v')
		return (1);
	return (0);
}

static int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
