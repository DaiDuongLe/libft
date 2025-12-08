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
	size_t	i;

	i = 0;
	if (c == '\0')
		while (1)
			if (s[i++] == c)
				return ((char *) s + i - 1);
	while (s[i])
		if (s[i++] == c)
			return ((char *) s + i - 1);
	return (NULL);
}
