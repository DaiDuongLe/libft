/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dale <dale@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:01:25 by dale              #+#    #+#             */
/*   Updated: 2025/12/30 16:01:26 by dale             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	set_n_negative(int *n, long *num);
static int	n_digits(int n);

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		isnegative;
	int		len;
	int		i;

	num = n;
	isnegative = set_n_negative(&n, &num);
	len = n_digits(n);
	str = malloc(len + isnegative + 1);
	if (!str)
		return (NULL);
	if (isnegative)
		str[0] = '-';
	i = len + isnegative - 1;
	while (i >= 0 + isnegative)
	{
		str[i] = num % 10 + '0';
		num /= 10;
		i--;
	}
	str[len + isnegative] = '\0';
	return (str);
}

static int	n_digits(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	set_n_negative(int *n, long *num)
{
	int	isnegative;

	if (*n < 0)
	{
		isnegative = 1;
		*num *= -1;
	}
	else
		isnegative = 0;
	return (isnegative);
}
