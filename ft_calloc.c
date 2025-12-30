/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dale <dale@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:47:00 by dale              #+#    #+#             */
/*   Updated: 2025/12/30 12:47:01 by dale             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;
	size_t			b;
	size_t			i;

	b = nmemb * size;
	if (b && b / nmemb != size)
		return (NULL);
	arr = (unsigned char *) malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < b)
		arr[i++] = 0;
	return (arr);
}
