/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:34:18 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/18 00:21:58 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *result;

	result = NULL;
	while (1)
	{
		if (*s == c)
			result = (char *)s;
		if (*s == 0)
			break ;
		s++;
	}
	return (result);
}
