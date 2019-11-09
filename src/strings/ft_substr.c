/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 01:45:44 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/31 18:57:17 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	index;
	char			*sub_str;

	if (s == NULL)
		return (NULL);
	if (start <= ft_strlen(s))
	{
		if ((sub_str = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
			return (NULL);
	}
	else
		return (ft_strdup(""));
	index = 0;
	while (index < len && s[start + index])
	{
		sub_str[index] = s[start + index];
		index++;
	}
	sub_str[index] = '\0';
	return (sub_str);
}
