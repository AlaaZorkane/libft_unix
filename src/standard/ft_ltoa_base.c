/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:51:58 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/28 20:53:45 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	get_hex(long long value, int maj)
{
	if (value <= 9)
		return (char)(value + '0');
	value -= 10;
	return (char)((maj ? 'A' : 'a') + value);
}

char		*ft_ltoa_base(long long n, int base)
{
	char			*result;
	long long		n_tmp;
	int				sign;
	int				index;

	if (n == 0)
		return (ft_strdup("0"));
	sign = n < 0;
	index = 0;
	if (!(result = (char *)ft_calloc(ft_count_base(n, base) + sign + 1, 1)))
		return (NULL);
	n_tmp = sign ? (long long)-n : (long long)n;
	while (n_tmp > 0)
	{
		result[index++] = get_hex(n_tmp % base, 0);
		n_tmp /= base;
	}
	result[index] = sign ? '-' : '\0';
	return (ft_strrev(result));
}
