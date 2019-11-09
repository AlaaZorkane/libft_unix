/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 18:08:21 by azorkane          #+#    #+#             */
/*   Updated: 2019/11/01 13:44:58 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t index;

	index = 0;
	while (size != 0 && index < size - 1 && src[index] != 0)
	{
		dst[index] = src[index];
		index++;
	}
	if (size != 0)
		dst[index] = 0;
	index = 0;
	while (src[index])
		index++;
	return (index);
}
