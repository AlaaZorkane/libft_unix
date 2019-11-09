/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:47:09 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/22 17:51:02 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int index;
	unsigned int position;

	position = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[position] != '\0')
	{
		if (haystack[position] == needle[0])
		{
			index = 1;
			while (needle[index] != '\0'
				&& haystack[position + index] == needle[index])
				++index;
			if (needle[index] == '\0')
				return ((char *)&haystack[position]);
		}
		++position;
	}
	return (NULL);
}
