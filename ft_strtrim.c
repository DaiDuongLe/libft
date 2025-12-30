/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dale <dale@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 14:23:11 by dale              #+#    #+#             */
/*   Updated: 2025/12/14 16:31:28 by dale             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		search_str(char c, const char *str);

char	*ft_strtrim(const char *s1, const char *set)
{
	char		*str;
	const char	*end_p;
	size_t		len;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	else
		end_p = s1 + ft_strlen(s1) - 1;
	while (search_str(*s1, set))
		s1++;
	while (search_str(*end_p, set))
		end_p--;
	len = end_p - s1 + 1;
	if (end_p < s1)
		len = 0;
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1, len);
	str[len] = '\0';
	return (str);
}

static int	search_str(char c, const char *str)
{
	while (*str)
		if (c == *str++)
			return (1);
	return (0);
}
