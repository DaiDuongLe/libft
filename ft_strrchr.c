/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dale <dale@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 20:38:02 by dale              #+#    #+#             */
/*   Updated: 2025/11/17 20:38:03 by dale             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	size_t			i;

	ch = c;
	i = ft_strlen(s);
	while (i)
		if (s[i--] == ch)
			return ((char *) s + i + 1);
	if (s[i] == ch)
		return ((char *) s);
	return (NULL);
}

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
