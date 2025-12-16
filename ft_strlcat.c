/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dale <dale@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 14:47:51 by dale              #+#    #+#             */
/*   Updated: 2025/12/13 14:47:53 by dale             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	ft_strnlen(const char *s, size_t maxlen);
static size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strnlen(dst, size);
	srclen = ft_strlen(src);
	if (size == dstlen)
		return (size + srclen);
	i = 0;
	while (*src && i < size - dstlen - 1)
		dst[dstlen + i++] = *src++;
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
		if (i == maxlen)
			return (i);
	}
	return (i);
}

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
