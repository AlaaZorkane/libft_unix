/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:04:33 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/18 00:21:58 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	index = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	ptr_src = (unsigned char *)src;
	ptr_dst = (unsigned char *)dst;
	while (index < n)
	{
		ptr_dst[index] = ptr_src[index];
		index++;
	}
	return (dst);
}
