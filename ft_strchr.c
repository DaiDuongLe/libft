/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dale <dale@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 20:38:02 by dale              #+#    #+#             */
/*   Updated: 2025/11/17 20:38:03 by dale             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	chr;
	size_t			i;

	chr = c;
	i = 0;
	if (chr == '\0')
		while (1)
			if (s[i++] == chr)
				return ((char *) s + i - 1);
	while (s[i])
		if (s[i++] == chr)
			return ((char *) s + i - 1);
	return (NULL);
}
