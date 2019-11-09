/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:43:32 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/18 02:25:18 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	*ret;

	ret = 0;
	index = 0;
	c = (unsigned char)c;
	while (1)
	{
		if (s[index] == c)
		{
			ret = (char *)&s[index];
			return (ret);
		}
		if (s[index] == '\0')
			return (NULL);
		index++;
	}
	return (ret);
}
