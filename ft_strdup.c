/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dale <dale@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 21:44:19 by dale              #+#    #+#             */
/*   Updated: 2025/12/25 21:44:22 by dale             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
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

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
