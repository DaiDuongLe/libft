/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dale <dale@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:32:18 by dale              #+#    #+#             */
/*   Updated: 2025/12/02 17:52:35 by dale             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static	int	overlaps(const void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	i = 0;
	if (!overlaps(dest, src, n))
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		n--;
		while (n + 1)
		{
			d[n] = s[n];
			n--;
		}
	}
	return (dest);
}

//if dest == src + n | n >= 1 => src overlaps with dest on the right
static	int	overlaps(const void *dest, const void *src, size_t n)
{
	n--;
	while (n)
		if (dest == (unsigned char *) src + n--)
			return (1);
	return (0);
}
