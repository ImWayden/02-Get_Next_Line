/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: therodri <therodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 05:17:28 by therodri          #+#    #+#             */
/*   Updated: 2022/12/07 22:01:39 by therodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n-- > 0)
		*(ptr++) = (char)c;
	return (ptr);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		true_size;

	true_size = nmemb * size;
	if (nmemb && true_size / nmemb != size)
		return (NULL);
	ptr = malloc(true_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, true_size);
	return (ptr);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*pdest;
	char	*psrc;

	if (!dest || !src)
		return (NULL);
	pdest = (char *)dest;
	psrc = (char *)src;
	if (pdest < psrc)
		while (n-- > 0)
			*(pdest++) = *(psrc++);
	else
		while (n-- > 0)
			pdest[n] = psrc[n];
	return (dest);
}
