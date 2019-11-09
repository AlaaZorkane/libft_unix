/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:55:22 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/22 17:51:18 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t index;
	size_t size;

	index = 0;
	size = 0;
	while (dest[size] != '\0')
		size++;
	while (src[index] != '\0' && index < nb)
	{
		dest[size] = src[index];
		index++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
