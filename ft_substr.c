/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dale <dale@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 12:01:17 by dale              #+#    #+#             */
/*   Updated: 2025/12/16 17:47:46 by dale             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static char		*ft_strdup(const char *s);
static size_t	ft_strlcpy(char *dst, const char *src, size_t size);
static size_t	ft_strlen(const char *s);

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;

	if ((size_t) start > ft_strlen(s))
		return (ft_strdup(""));
	else if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substr = (char *) malloc(sizeof(char) * ++len);
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, &s[start], len);
	return (substr);
}

static char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	strlen;

	strlen = ft_strlen(s);
	str = (char *) malloc(sizeof(char) * (strlen + 1));
	if (str == NULL)
		return (NULL);
	while (*s)
		*str++ = *s++;
	*str = '\0';
	return (str - strlen);
}

static size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
