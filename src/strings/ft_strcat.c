/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:41:47 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/22 18:07:17 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strcat(char *dest, const char *src)
{
	int index;
	int destlen;

	index = 0;
	destlen = ft_strlen(dest);
	while (src[index] != '\0')
	{
		dest[destlen] = src[index];
		index++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
