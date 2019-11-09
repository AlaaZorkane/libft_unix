/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 05:40:01 by azorkane          #+#    #+#             */
/*   Updated: 2019/11/02 22:38:21 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_base(long long n, int base)
{
	int count;

	if (!n)
		return (1);
	count = 0;
	while (n)
	{
		n /= base;
		count++;
	}
	return (count);
}
