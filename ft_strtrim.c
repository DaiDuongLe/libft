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

#include <stddef.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *s);
static int		search_str(char c, const char *str);
static void		*ft_memcpy(void *dest, const void *src, size_t n);

char	*ft_strtrim(const char *s1, const char *set)
{
	char		*str;
	const char	*end_p;
	size_t		len;
//check if all chars in string are in set - set "a", "aa"; check if 1 char - set "a", "a"
	end_p = s1 + ft_strlen(s1) - 1;
	while (search_str(*s1, set))
		s1++;
	while (search_str(*end_p, set))
		end_p--;
	len = end_p - s1 + 1;
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1, len);
	str[len] = '\0';
	return (str);
}

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	search_str(char c, const char *str)
{
	while (*str)
		if (c == *str++)
			return (1);
	return (0);
}

static void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
