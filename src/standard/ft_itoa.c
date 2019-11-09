/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:51:58 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/28 20:53:45 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits_count(int n)
{
	int size;

	size = 0;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	char			*result;
	unsigned int	n_tmp;
	int				sign;
	int				index;

	if (n == 0)
	{
		if (!(result = (char *)malloc(sizeof(*result) + 1)))
			return (NULL);
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	sign = n < 0;
	index = 0;
	if (!(result = (char *)ft_calloc(digits_count(n) + sign + 1, 1)))
		return (NULL);
	n_tmp = sign ? (unsigned int)-n : (unsigned int)n;
	while (n_tmp > 0)
	{
		result[index++] = n_tmp % 10 + '0';
		n_tmp /= 10;
	}
	result[index] = sign ? '-' : '\0';
	return (ft_strrev(result) ? result : result);
}
