/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 15:03:35 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/18 02:25:18 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	jndex;
	size_t	result;

	index = 0;
	while (dest[index] != '\0')
		++index;
	result = 0;
	while (src[result] != '\0')
		++result;
	if (size <= index)
		result += size;
	else
		result += index;
	jndex = 0;
	while (src[jndex] != '\0' && index + 1 < size)
	{
		dest[index] = src[jndex];
		index++;
		jndex++;
	}
	dest[index] = '\0';
	return (result);
}
