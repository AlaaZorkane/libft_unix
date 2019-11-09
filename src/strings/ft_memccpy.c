/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:32:31 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/21 16:06:01 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	index = 0;
	ptr_dst = (unsigned char*)dst;
	ptr_src = (unsigned char*)src;
	while (index < n)
	{
		ptr_dst[index] = ptr_src[index];
		if (ptr_dst[index] == (unsigned char)c)
			return ((void*)(dst + index + 1));
		index++;
	}
	return (NULL);
}
