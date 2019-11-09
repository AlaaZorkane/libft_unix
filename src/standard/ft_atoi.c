/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 03:56:46 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/28 19:59:26 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_sign(const char *str)
{
	int sign;

	if (*str == '-')
		sign = 1;
	else if (*str == '+')
		sign = 0;
	else if (ft_isdigit(*str))
		sign = 2;
	else
		sign = -2;
	return (sign);
}

/*
**	SIGN == 1 >> NEGATIVE
**	SIGN == 0 >> POSITIVE
**	SIGN == 2 >> DIGIT
**	SIGN == 3 >> OTHER
*/

int			ft_atoi(const char *str)
{
	int			sign;
	long long	result;
	int			digit;

	result = 0;
	while (ft_isspace(*str))
		str++;
	sign = get_sign(str);
	if (sign == 0 || sign == 1)
		str++;
	while (ft_isdigit(*str))
	{
		digit = *str - '0';
		result = (10 * result) + digit;
		str++;
	}
	if (sign == 2 || sign == 1 || sign == 0)
		return (sign == 1 ? -result : result);
	return (result);
}
