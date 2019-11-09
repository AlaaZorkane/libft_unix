/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:25:05 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/31 13:23:09 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle,
						size_t len)
{
	size_t index;
	size_t position;

	if (needle[0] == '\0')
		return ((char *)haystack);
	position = 0;
	while (haystack[position] != '\0' && position < len)
	{
		if (haystack[position] == needle[0])
		{
			index = 1;
			while (needle[index] != '\0'
				&& haystack[position + index] == needle[index]
				&& (position + index) < len)
				++index;
			if (needle[index] == '\0')
				return ((char *)&haystack[position]);
		}
		position++;
	}
	return (NULL);
}
