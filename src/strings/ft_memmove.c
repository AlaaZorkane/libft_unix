/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:08:38 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/26 09:50:05 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				index;
	const unsigned char	*ptr_src;
	unsigned char		*ptr_dst;

	if (src == NULL && dst == NULL)
		return (NULL);
	index = 0;
	ptr_src = (unsigned char *)src;
	ptr_dst = (unsigned char *)dst;
	if (ptr_src < ptr_dst)
	{
		index++;
		while (index <= len)
		{
			ptr_dst[len - index] = ptr_src[len - index];
			index++;
		}
	}
	else
		while (len > 0)
		{
			*(ptr_dst++) = *(ptr_src++);
			len--;
		}
	return (dst);
}
