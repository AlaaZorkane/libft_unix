/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:20:26 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/22 19:56:08 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ptr;
	const unsigned char *last;

	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	last = ptr + n;
	while (1)
	{
		if (ptr >= last || ptr[0] == c)
			break ;
		ptr++;
		if (ptr >= last || ptr[0] == c)
			break ;
		ptr++;
		if (ptr >= last || ptr[0] == c)
			break ;
		ptr++;
		if (ptr >= last || ptr[0] == c)
			break ;
		ptr++;
	}
	if (ptr >= last)
		return (NULL);
	else
		return (void *)ptr;
}
