/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dale <dale@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 16:59:44 by dale              #+#    #+#             */
/*   Updated: 2025/12/13 16:59:46 by dale             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b_len;
	size_t	l_len;
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *) big);
	b_len = ft_strlen(big);
	l_len = ft_strlen(little);
	i = 0;
	while (i + l_len <= len && i + l_len <= b_len)
	{
		j = 0;
		while (little[j])
		{
			if (big[i + j] != little[j])
				break ;
			else if (j++ == l_len - 1)
				return ((char *) big + i);
		}
		i++;
	}
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
